/*
Есть 3 двумерных массива A, B, C.
Количество строк и столбцов для них пользователь вводит с клавиатуры для каждого из них.
Создайте одномерный массив, который содержит общие значения для A, B, C
Создайте одномерный массив, который содержит уникальные значения для A, B, C
Создайте одномерный массив, который содержит общие значения для A и C
Создайте одномерный массив, который содержит отрицательные значения для A, B, C без повторений
*/

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <time.h>
using namespace std;

enum MasRow
{
    MasA = 0,
    MasB = 1,
    MasC = 2
};

enum MasColumn
{
    InitializeOK = 0,
    Size1 = 1,
    Size2 = 2,
};

void initializeMassiv(int*** masX, int** allAboutMas, enum MasRow arrayRow);
void SowMas(int** masX, int size1, int size2);
void commonABC(int* resultMas, int** masA, int** masB, int** masC, int** allAboutMas);
void unicABC(int* resultMas, int** masA, int** masB, int** masC, int** allAboutMas);
void commonAC(int* resultMas, int** masA, int** masC, int** allAboutMas);
void commonNegativeABC(int* resultMas, int** masA, int** masB, int** masC, int** allAboutMas);
void deleteMas(int** masX, int** allAboutMas, enum MasRow masRow);
bool findNumberInMas(int number, int** mas, int size1, int size2);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    int** masA;
    int** masB;
    int** masC;

    //создание массива, в котором будет храниться информация о размерностях новых массивов
    int** allAboutMas = new int* [3];
    for (int i = 0; i < 3; i++)
    {
        allAboutMas[i] = new int[3];
    }
    cout << "\n Инициализируем массив А." << endl;
    initializeMassiv(&masA, allAboutMas, MasA);

    cout << "\n Инициализируем массив B." << endl;
    initializeMassiv(&masB, allAboutMas, MasB);

    cout << "\n Инициализируем массив C." << endl;
    initializeMassiv(&masC, allAboutMas, MasC);

    if (allAboutMas[MasA][InitializeOK] == 0 ||
        allAboutMas[MasB][InitializeOK] == 0 ||
        allAboutMas[MasC][InitializeOK] == 0)
    {
        cout << " Проблема с одним из массивов" << endl;
    }
    else
    {
        cout << " Все массивы успешно инициализированы" << endl;
        int minSize = 1000;
        int maxSize = 0;
        int minSizeAC = allAboutMas[MasA][Size1] * allAboutMas[MasA][Size2];

        //определение размерностей новых одномерных массивов
        for (int i = 0; i < 3; i++)
        {
            if ((allAboutMas[i][Size1] * allAboutMas[i][Size2]) < minSize)
            {
                minSize = allAboutMas[i][Size1] * allAboutMas[i][Size2];
            }
            if ((allAboutMas[i][Size1] * allAboutMas[i][Size2]) > maxSize)
            {
                maxSize = allAboutMas[i][Size1] * allAboutMas[i][Size2];
            }
        }
        if (allAboutMas[MasC][Size1] * allAboutMas[MasC][Size2] < minSizeAC)
        {
            minSizeAC = allAboutMas[MasC][Size1] * allAboutMas[MasC][Size2];
        }

        int* resultMassiv1 = new int[minSize];
        int* resultMassiv2 = new int[maxSize];
        int* resultMassiv3 = new int[minSizeAC];
        int* resultMassiv4 = new int[minSize];

        //общие значения для A, B, C
        commonABC(resultMassiv1, masA, masB, masC, allAboutMas);
        //уникальные значения для A, B, C
        unicABC(resultMassiv2, masA, masB, masC, allAboutMas);
        //общие значения для A и C
        commonAC(resultMassiv3, masA, masC, allAboutMas);
        //отрицательные значения для A, B, C без повторений
        commonNegativeABC(resultMassiv4, masA, masB, masC, allAboutMas);
        //удаление массивов
        delete[] resultMassiv1;
        delete[] resultMassiv2;
        delete[] resultMassiv3;
        delete[] resultMassiv4;

        system("pause");
        return 0;
    }

    //удаление массивов
    deleteMas(masA, allAboutMas, MasA);
    deleteMas(masB, allAboutMas, MasB);
    deleteMas(masC, allAboutMas, MasC);

    for (int i = 0; i < 3; i++)
    {
        delete[] allAboutMas[i];
    }
    delete[] allAboutMas;
}

void initializeMassiv(int*** masX, int** allAboutMassivs, enum MasRow masRow)
{
    int userSize1;
    int userSize2;
    cout << "\n Введите первый размер массива (0...10):";
    cin >> userSize1;
    //лимит размерности 10х10
    if (userSize1 < 1 || userSize1 > 10)
    {
        cout << "\n Неверное значение" << endl;
        allAboutMassivs[masRow][InitializeOK] = 0;
        return;
    }
    cout << "\n Введите второй размер массива (0...10):";
    cin >> userSize2;
    if (userSize2 < 1 || userSize2 > 10)
    {
        cout << "\n Неверное значение" << endl;
        allAboutMassivs[masRow][InitializeOK] = 0;
        return;
    }
    //запись информации о размерности массива
    allAboutMassivs[masRow][InitializeOK] = 1;
    allAboutMassivs[masRow][Size1] = userSize1;
    allAboutMassivs[masRow][Size2] = userSize2;

    //создание массива заданной размерности
    *masX = new int* [userSize1];
    for (int i = 0; i < userSize1; i++)
    {
        (*masX)[i] = new int[userSize2];
    }
    //заполнение массива
    for (int i = 0; i < userSize1; i++)
    {
        for (int j = 0; j < userSize2; j++)
        {
            //заполняем числами от -50 до 50
            (*masX)[i][j] = rand() % 101 - 50;
        }
    }
    cout << "\n Ваш массив:" << endl;
    SowMas((*masX), userSize1, userSize2);
}
void SowMas(int** arrayX, int size1, int size2)
{
    if (arrayX == nullptr || size1 < 1 || size2 < 1)
    {
        cout << "Error3" << endl;
        return;
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << setw(4) << arrayX[i][j];
        }
        cout << endl;
    }
}
void commonABC(int* resultMas, int** masA, int** masB, int** masC, int** allAboutMas)
{
    if (masA == nullptr || masB == nullptr || masC == nullptr)
    {
        cout << " ОШИБКА1" << endl;
        return;
    }
    int iteratorResultMas = 0;
    int writeOk = true;
    for (int i = 0; i < allAboutMas[MasA][Size1]; i++)
    {
        for (int j = 0; j < allAboutMas[MasA][Size2]; j++)
        {
            if (findNumberInMas(masA[i][j], masB, allAboutMas[MasB][Size1], allAboutMas[MasB][Size2]) == true &&
                findNumberInMas(masA[i][j], masC, allAboutMas[MasC][Size1], allAboutMas[MasC][Size2]) == true)
            {
                //ищем в итоговом массиве вхождения данного элемента
                for (int k = 0; k < iteratorResultMas; k++)
                {
                    if (masA[i][j] == resultMas[k])
                    {
                        //если нашли вхождение, то не заносим в массив
                        writeOk = false;
                        break;
                    }
                }
                if (writeOk)
                {
                    resultMas[iteratorResultMas] = masA[i][j];
                    iteratorResultMas++;
                }
                writeOk = true;
            }
        }
    }
    //вывод на экран итогового массива или сообщения, что не найдены совпадения
    if (iteratorResultMas != 0)
    {
        cout << "\n Общее значение A+B+C:";
        for (int i = 0; i < iteratorResultMas; i++)
        {
            cout << resultMas[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "\n Нет результатов, соответствующих значениям A+B+C" << endl;
    }
}
void unicABC(int* resultMas, int** masA, int** masB, int** masC, int** allAboutMas)
{
    if (masA == nullptr || masB == nullptr || masC == nullptr)
    {
        cout << " ОШИБКА2" << endl;
        return;
    }
    int iteratorResultMas = 0;
    int writeOk = true;
    for (int i = 0; i < allAboutMas[MasA][Size1]; i++)
    {
        for (int j = 0; j < allAboutMas[MasA][Size2]; j++)
        {
            if (findNumberInMas(masA[i][j], masB, allAboutMas[MasB][Size1], allAboutMas[MasB][Size2]) == false &&
                findNumberInMas(masA[i][j], masC, allAboutMas[MasC][Size1], allAboutMas[MasC][Size2]) == false)
            {
                //ищем в итоговом массиве вхождения данного элемента
                for (int k = 0; k < iteratorResultMas; k++)
                {
                    if (masA[i][j] == resultMas[k])
                    {
                        //если нашли вхождение, то не заносим в массив
                        writeOk = false;
                        break;
                    }
                }
                if (writeOk)
                {
                    resultMas[iteratorResultMas] = masA[i][j];
                    iteratorResultMas++;
                }
                writeOk = true;
            }
        }
    }
    //вывод на экран итогового массива или сообщения, что уникальнх чисел не найдено
    if (iteratorResultMas != 0)
    {
        cout << "\n Уникальное значение A+B+C:" << endl;
        for (int i = 0; i < iteratorResultMas; i++)
        {
            cout << setw(4) << resultMas[i] << " ";
            if (i % 5 == 4)
            {
                cout << endl;
            }
        }
        cout << endl;
    }
    else
    {
        cout << "\n Уникальные значения не найдены." << endl;
    }
}
void commonAC(int* resultMas, int** masA, int** masC, int** allAboutMas)
{
    if (masA == nullptr || masC == nullptr)
    {
        cout << " ОШИБКА3" << endl;
        return;
    }
    int iteratorResultMas = 0;
    int writeOk = true;
    for (int i = 0; i < allAboutMas[MasA][Size1]; i++)
    {
        for (int j = 0; j < allAboutMas[MasA][Size2]; j++)
        {
            if (findNumberInMas(masA[i][j], masC, allAboutMas[MasC][Size1], allAboutMas[MasC][Size2]) == true)
            {
                //ищем в итоговом массиве вхождения данного элемента
                for (int k = 0; k < iteratorResultMas; k++)
                {
                    if (masA[i][j] == resultMas[k])
                    {
                        //если нашли вхождение, то не заносим в массив
                        writeOk = false;
                        break;
                    }
                }
                if (writeOk)
                {
                    resultMas[iteratorResultMas] = masA[i][j];
                    iteratorResultMas++;
                }
                writeOk = true;
            }
        }
    }
    //вывод на экран итогового массива или сообщения, что не найдены совпадения
    if (iteratorResultMas != 0)
    {
        cout << "\n Общее значение А+С:";
        for (int i = 0; i < iteratorResultMas; i++)
        {
            cout << resultMas[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "\n Нет результатов, соответствующих значениям A+C" << endl;
    }
}
void commonNegativeABC(int* resultMas, int** masA, int** masB, int** masC, int** allAboutMas)
{
    if (masA == nullptr || masB == nullptr || masC  == nullptr)
    {
        cout << " ОШИБКА4" << endl;
        return;
    }
    int iteratorResultMas = 0;
    int writeOk = true;
    for (int i = 0; i < allAboutMas[MasA][Size1]; i++)
    {
        for (int j = 0; j < allAboutMas[MasA][Size2]; j++)
        {
            if (masA[i][j] < 0 &&
                findNumberInMas(masA[i][j], masB, allAboutMas[MasB][Size1], allAboutMas[MasB][Size2]) == true &&
                findNumberInMas(masA[i][j], masC, allAboutMas[MasC][Size1], allAboutMas[MasC][Size2]) == true)
            {
                //ищем в итоговом массиве вхождения данного элемента
                for (int k = 0; k < iteratorResultMas; k++)
                {
                    if (masA[i][j] == resultMas[k])
                    {
                        //если нашли вхождение, то не заносим в массив
                        writeOk = false;
                        break;
                    }
                }
                if (writeOk)
                {
                    resultMas[iteratorResultMas] = masA[i][j];
                    iteratorResultMas++;
                }
                writeOk = true;
            }
        }
    }
    //вывод на экран итогового массива или сообщения, что не найдены совпадения
    if (iteratorResultMas != 0)
    {
        cout << "\n Обычное отрицательное значение A+B+C:";
        for (int i = 0; i < iteratorResultMas; i++)
        {
            cout << setw(4) << resultMas[i] << " ";
            if (i % 5 == 4)
            {
                cout << endl;
            }
        }
        cout << endl;
    }
    else
    {
        cout << "\n Нет результатов, соответствующих отрицательным значениям A+B+C" << endl;
    }
}
void deleteMas(int** masX, int** allAboutMas, enum MasRow masRow)
{
    if (allAboutMas[masRow][InitializeOK] == 1)
    {
        for (int i = 0; i < allAboutMas[masRow][Size1]; i++)
        {
            delete[] masX[i];
        }
        delete[] masX;
    }
    else
    {
        cout << " Ошибка, проблема с массивом " << masRow + 1 << endl;
    }
}
bool findNumberInMas(int number, int** mas, int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (number == mas[i][j])
            {
                return true;
            }
        }
    }
    return false;
}