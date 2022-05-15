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
    cout << "\n ���� ��� �������: �[M] � B[N] (M �  N �������� � ����������)." << endl;
    cout << " ���������� ������� ������ ������ ���������� ���������� �������," << endl;
    cout << " � ������� ����� ������� �������� �������" << endl;
    cout << " ������� �� �������� ������ ��� ���, ��� ����������." << endl;

    int sizeA, sizeB;
    cout << "\n ������� ������ ������� �������: ";
    cin >> sizeA;
    cout << " ������� ������ ������� �������: ";
    cin >> sizeB;
    int* arrA = new int[sizeA];
    int* arrB = new int[sizeB];
    cout << "\n\n ������ ������: ";
    for (int x = 0; x < sizeA; x++)
    {
        arrA[x] = rand() % 9 + 1;
        cout << arrA[x] << " ";
    }
    cout << "\n\n ������ ������: ";
    for (int x = 0; x < sizeB; x++)
    {
        arrB[x] = rand() % 9 + 1;
        cout << arrB[x] << " ";
    }


    sort(arrA, sizeA);
    sort(arrB, sizeB);

    cout << "\n\n ������ ������ (���������������): ";
    for (int x = 0; x < sizeA; x++)
    {
        cout << arrA[x] << " ";
    }
    cout << "\n\n ������ ������ (���������������): ";
    for (int x = 0; x < sizeB; x++)
    {
        cout << arrB[x] << " ";
    }
    cout << endl;

    // ������ ����.����� �� ������ �������, ������� ��������� ����� ��������� � ������ ������

    int tmp = 0;
    // ������� ��������� �� ������� �������?
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

    // ������� �������� �� ������� �������?
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

    // ������ ����. �� �� ����� �����, �� ��� �� �������, ����������� ���������� �������� � ������ ������

    // �������� � ������ ������ �������� �� ������� �������
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

    // �������� � ������ ������ ������� �� ������� �������
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

    // �������
    cout << "\n �������� ������� �������� �� �������� ������ : ";
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