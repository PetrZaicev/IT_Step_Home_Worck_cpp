/*
Дана матрица порядка MxN (M строк, N столбцов).
Необходимо заполнить ее значениями и написать функцию,
осуществляющую циклический сдвиг строк и/или столбцов
массива указанное количество раз и в указанную сторону.
*/

#include <iostream>
#include <iomanip>
using namespace std;


enum UserChoice
{
    Exit = 0,
    MoveRowsDown = 1,
    MoveRowsUp = 2,
    MoveColumnsLeft = 3,
    MoveColumnsRight = 4,
};

//инициализация массива
void inicMas(int** pMas, int rowCount, int columnCount)
{
    if (pMas == nullptr)
    {
        cout << " ОШИБКА!" << endl;
        return;
    }

    int value = 1;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            pMas[i][j] = value;
            value++;
        }
    }
}

//вывод массива на экран
void ShowMas(int** pMas, int rowCount, int columnCount)
{
    if (pMas == nullptr)
    {
        cout << " ОШИБКА!" << endl;
        return;
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << setw(3) << pMas[i][j] << " ";
        }
        cout << endl;
    }
}

//сдвиг массива
void moveMas(int** pMas, int rowCount, int columnCount)
{
    int intUserChoice;
    enum UserChoice userChoice;
    int originalMovesCount = 0;
    int changedMovesCount = 0;
    int temp;

    cout << " Сделайте Ваш выбор! " << endl <<
        " 0 -> Выход." << endl <<
        " 1 -> Переместить строки вниз" << endl <<
        " 2 -> Переместить строки вверх" << endl <<
        " 3 -> Переместить столбцы влево" << endl <<
        " 4 -> Переместить столбцы вправо" << endl;
    cin >> intUserChoice;
    userChoice = (enum UserChoice)intUserChoice;

    switch (userChoice)
    {
    case Exit:
        cout << " Вы вышли!" << endl;
        break;
    case MoveRowsDown:
    case MoveRowsUp:
    case MoveColumnsLeft:
    case MoveColumnsRight:
        cout << " На сколько преместить ?" << endl;
        cin >> originalMovesCount;
        if (originalMovesCount <= 0)
        {
            cout << " Значение должно быыть > 0" << endl;
            return;
        }

        changedMovesCount = originalMovesCount;
        //для ускорения сдвига
        if ((changedMovesCount >= rowCount && userChoice == MoveRowsDown) ||
            (changedMovesCount >= rowCount && userChoice == MoveRowsUp))
        {
            changedMovesCount = changedMovesCount % rowCount;
        }
        else if ((changedMovesCount >= columnCount && userChoice == MoveColumnsLeft) ||
            (changedMovesCount >= columnCount && userChoice == MoveColumnsRight))
        {
            changedMovesCount = changedMovesCount % columnCount;
        }
        //сам сдвиг
        while (changedMovesCount != 0)
        {
            switch (userChoice)
            {
            case MoveRowsDown:
                for (int column = 0; column < columnCount; column++)
                {
                    temp = pMas[rowCount - 1][column];
                    for (int row = rowCount - 1; row > 0; row--)
                    {
                        pMas[row][column] = pMas[row - 1][column];
                    }
                    pMas[0][column] = temp;
                }
                break;
            case MoveRowsUp:
                for (int column = 0; column < columnCount; column++)
                {
                    temp = pMas[0][column];
                    for (int row = 0; row < rowCount - 1; row++)
                    {
                        pMas[row][column] = pMas[row + 1][column];
                    }
                    pMas[rowCount - 1][column] = temp;
                }
                break;
            case MoveColumnsLeft:
                for (int row = 0; row < rowCount; row++)
                {
                    temp = pMas[row][0];
                    for (int column = 0; column < columnCount - 1; column++)
                    {
                        pMas[row][column] = pMas[row][column + 1];
                    }
                    pMas[row][columnCount - 1] = temp;
                }
                break;
            case MoveColumnsRight:
                for (int row = 0; row < rowCount; row++)
                {
                    temp = pMas[row][columnCount - 1];
                    for (int column = columnCount - 1; column > 0; column--)
                    {
                        pMas[row][column] = pMas[row][column - 1];
                    }
                    pMas[row][0] = temp;
                }
                break;
            default:
                cout << " ОШИБКА!" << endl;
                break;
            }
            changedMovesCount--;
        }
        //конец сдвига
        ShowMas(pMas, rowCount, columnCount);
        break;
    default:
        cout << " Неверное значение" << endl;
        break;
    }
}

int main()
{

    setlocale(LC_ALL, "rus");

    int rowCount;
    int columnCount;

        cout << "\n\n Введите количество строк (1...10):";
        cin >> rowCount;

        if (rowCount <= 0 || rowCount > 10)
        {
            cout << " Неверное значение количества строк" << endl;
            return 1;
        }


        cout << " Введите количество столбцов (1...10):";
        cin >> columnCount;

        if (columnCount <= 0 || columnCount > 10)
        {
            cout << " Неверное значение количества столбцов" << endl;
            return 1;
        }

        int** simpleMas = new int* [rowCount];
        for (int i = 0; i < rowCount; i++)
        {
            simpleMas[i] = new int[columnCount];
        }
        //заполнение и вывод на экран
        inicMas(simpleMas, rowCount, columnCount);
        cout << " Вывлд массива: " << endl;
        ShowMas(simpleMas, rowCount, columnCount);
        //работа с массивом
        moveMas(simpleMas, rowCount, columnCount);

        //удаление массива
        for (int i = 0; i < rowCount; i++)
        {
            delete[] simpleMas[i];
        }
        delete[] simpleMas;
    
    
    system("pause");
    return 0;
}
