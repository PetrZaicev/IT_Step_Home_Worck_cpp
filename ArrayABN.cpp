#include <iostream>
using namespace std;

void sort(int* arrN, int sizeN)
{
    int tmp = 0;
    for (int i = 0; i < sizeN; ++i)
    {
        for (int j = i + 1; j < sizeN; ++j)
        {
            if (arrN[j] < arrN[i])
            {
                tmp = arrN[j];
                arrN[j] = arrN[i];
                arrN[i] = tmp;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\n Даны два массива: А[M] и B[N] (M и  N вводятся с клавиатуры)." << endl;
    cout << " Необходимо создать третий массив минимально возможного размера," << endl;
    cout <<" в котором нужно собрать элементы массива A, которые не включаются в массив B"<<endl;
int sizeA, sizeB;
cout << "\n Введите размер первого массива: ";
cin >> sizeA;
cout << " Введите размер второго массива: ";
cin >> sizeB;
int* arrA = new int[sizeA];
int* arrB = new int[sizeB];
cout << "\n\n Первый массив: ";
for (int x = 0; x < sizeA; x++)
{
    arrA[x] = rand() % 9 + 1;
    cout << arrA[x] << " ";
}
cout << "\n\n Второй массив: ";
for (int x = 0; x < sizeB; x++)
{
    arrB[x] = rand() % 9 + 1;
    cout << arrB[x] << " ";
}

sort(arrA, sizeA);
sort(arrB, sizeB);

cout << "\n\n Первый массив (Отсортированный): ";
for (int x = 0; x < sizeA; x++)
{
    cout << arrA[x] << " ";
}
cout << "\n\n Второй массив (Отсортированный): ";
for (int x = 0; x < sizeB; x++)
{
    cout << arrB[x] << " ";
}

int* arrN = new int[sizeA < sizeB ? sizeA : sizeB];
int sizeN = 0;

cout << endl;

bool flag;
for (int x = 0; x < sizeA; x++)
{
    flag = false;
    for (int y = 0; y < sizeB; y++)
    {
        if (arrA[x] == arrB[y])
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        arrN[sizeN] = arrA[x];
        sizeN++;
    }
}
sort(arrN, sizeN);
cout << "\n Элементы массива A, которые не включаются в массив B: ";
for (int x = 0; x < sizeN; x++)
{
    arrN[x];
}
for (int x = 0; x < sizeN; x++)
{
    cout << arrN[x] << " ";
}
cout << endl;
delete[] arrA;
delete[] arrB;
delete[] arrN;

return 0;
}