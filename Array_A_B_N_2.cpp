#include<iostream>
#include<time.h>
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
    cout << " в котором нужно собрать элементы массива" << endl;
    cout << " которые не являются общими для них, без повторений." << endl;

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
    cout << endl;

    // первый этап.Здесь мы просто СЧИТАЕМ, сколько элементов нужно поместить в третий массив

    int tmp = 0;
    // сколько элементов из первого массива?
    for (int i = 0; i < sizeA; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < sizeB; j++)
        {
            if (arrA[i] == arrB[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            tmp++;
    }

    // сколько элеметов из второго массива?
    for (int i = 0; i < sizeB; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < sizeA; j++)
        {
            if (arrB[i] == arrA[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            tmp++;
    }

    int sizeN = tmp;
    int* arrN = new int[sizeN];
    tmp = 0;

    // второй этап. Те же самые циклы, но уже не считаем, азаписываем уникальные элементы в третий массив

    // помещаем в третий массив элементы из первого массива
    for (int i = 0; i < sizeA; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < sizeB; j++)
        {
            if (arrA[i] == arrB[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            arrN[tmp++] = arrA[i];
    }

    // помещаем в третий массив элеметы из второго массива
    for (int i = 0; i < sizeB; i++)
    {
        bool inBoth = false;
        for (int j = 0; j < sizeA; j++)
        {
            if (arrB[i] == arrA[j]) {
                inBoth = true;
                break;
            }
        }
        if (!inBoth)
            arrN[tmp++] = arrB[i];
    }

    // выводим
    cout << "\n Элементы массива нкоторые не являются общими : ";
    for (int i = 0; i < sizeN; i++)
    {
        cout << arrN[i] << " ";
    }

    delete[] arrA;
    delete[] arrB;
    delete[] arrN;

    cout << endl<<endl;
  

    system("pause");
    return 0;
}