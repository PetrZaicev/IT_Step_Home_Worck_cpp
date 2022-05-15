/*Написать функцию, определяющую количество
положительных, отрицательных и нулевых элементов
передаваемого ей массива.*/

#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int RandInt(int min, int max)
{
    if (max < min)
        swap(max, min);
    return min + rand() % (max - min + 1);
}

void SetRndArray1D(int arr[], int n, int min, int max)
{
    for (size_t i = 0; i < n; i++)
        arr[i] = RandInt(min, max);
}

// Показ масссива
void ShowArray1D(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
        cout <<" " << arr[i] <<" ";
        cout <<endl;
}

// Положительные элементы
int PositiveArrayElement(int arr[], int n)
{
    int PosEl = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            PosEl++;
    }
    return PosEl;
}

// Отрицательные элементы
int NegativeArrayElement(int arr[], int n)
{
    int NegEl = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            NegEl++;
    }
    return NegEl;
}

// Нулевые элементы
int ZeroArrayElement(int arr[], int n)
{
    int ZerEl = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            ZerEl++;
    }
    return ZerEl;
}


int main()
{
    setlocale(LC_ALL,"rus");
    int const size = 100;
    srand(time(0));

    int n;
    int arr[size]{ 0 };
    int min = -10, max = 10;

    cout << "\n\t Написать функцию, определяющую количество" << endl;
    cout << "\t положительных, отрицательных и нулевых элементов" << endl;
    cout << "\t передаваемого ей массива." << endl;
    cout << "\n\t Введите размер массива: ";
    cin >> n;
    SetRndArray1D(arr, n, min, max);
    RandInt(min, max);
    cout << " Массив: " << endl;
    ShowArray1D(arr, n);
    cout << "\n В передаваемом функции массиве элементов: \n - положительных: " << PositiveArrayElement(arr, n) << endl;
    cout << " - отрицательых: " << NegativeArrayElement(arr, n) << endl;
    cout << " - нулевых: " << ZeroArrayElement(arr, n) << endl;
}