#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

//инициализация массива
void InicMas(int** pMas, int rowCount, int columnCount)
{
    if (pMas == nullptr)
    {
        cout << " Ошибка!" << endl;
        return;
    }

    int value = 1;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            for (int i = 0; i < rowCount; i++) {
                pMas[i][j] = 1 + rand() % 10;
            }
        }
    }
}

//вывод массива на экран
void ShowMas(int** pMas, int rowCount, int columnCount)
{
    if (pMas == nullptr)
    {
        cout << " Ошибка" << endl;
        return;
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << setw(4) << pMas[i][j];
        }
        cout << endl;
    }
}

//добавление столбца
void addColumn(int** pArray, int rowCount, int columnCount, int index)
{
    if (pArray == nullptr)
    {
        cout << " Ошибка!" << endl;
        return;
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            //сдвигаем вправо значения
            if (j == index)
            {
                for (int k = columnCount; k > index; k--)
                {
                    pArray[i][k] = pArray[i][k - 1];
                }
                //заполняем вставленный столбец 0ми
                pArray[i][j] = 0;
            }
        }
    }
}

//удаление столбца
void deleteColumn(int** pArray, int rowCount, int columnCount, int index)
{
    if (pArray == nullptr)
    {
        cout << " Ошибка!" << endl;
        return;
    }

    for (int i = 0; i < rowCount; i++)
    {
        //j < columnCount, чтобы в крайний правый столбец записался мусор,
        //который до этого был справа, а не осталось правильное значение как до удаления.
        for (int j = index; j < columnCount; j++)
        {
            pArray[i][j] = pArray[i][j + 1];
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    cout << "\n\n 1) Написать функцию, добавляющую столбец" << endl;
    cout <<"     двухмерному массиву в указанную позицию." << endl;
    cout << " 2) Написать функцию, удаляющую столбец двух-" << endl;
    cout << "    мерного массива по указанному номеру." << endl;

    int rowCount;
    int columnCount;
    int const startColumnCount = 100;

    cout << "\n Введите колтчество строк массива :";
    cin >> columnCount;
    cout << " Введите колтчество столбцов массива :";
    cin >> rowCount;
   
    int userIndex;
    int** simpleMas = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
    {
        simpleMas[i] = new int[startColumnCount];
    }
    InicMas(simpleMas, rowCount, columnCount);
    cout << " Созданый массив: " << endl<<endl;

    ShowMas(simpleMas, rowCount, columnCount);
    //столбец можно добавить как в середину, так и в конец массива.

    cout << "\n какой столбец вы хотите добавить: " << "\n Введите число от 0..." << columnCount<<"  :   ";
    cin >> userIndex; cout << endl;

    if (userIndex >= 0 && userIndex <= columnCount)
    {
        columnCount++;
        addColumn(simpleMas, rowCount, columnCount, userIndex);
        ShowMas(simpleMas, rowCount, columnCount);
    }
    else
    {
        cout << " Неверное значение" << endl;
    }
    //удаление столбца
    cout << "\n какой столбец вы хотите удалить: " << " Введите число от 0..." << columnCount -1 << "  :   ";
    cin >> userIndex;
    if (userIndex >= 0 && userIndex < columnCount)
    {
        deleteColumn(simpleMas, rowCount, columnCount, userIndex);
        columnCount--;
        ShowMas(simpleMas, rowCount, columnCount);
    }
    else
    {
        cout << " Неверное значение" << endl;
    }
    //удаление массива
    for (int i = 0; i < rowCount; i++)
    {
        delete[] simpleMas[i];
    }
    delete[] simpleMas;

    system("pause");
    return 0;
}
