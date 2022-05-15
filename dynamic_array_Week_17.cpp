#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

//������������� �������
void InicMas(int** pMas, int rowCount, int columnCount)
{
    if (pMas == nullptr)
    {
        cout << " ������!" << endl;
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

//����� ������� �� �����
void ShowMas(int** pMas, int rowCount, int columnCount)
{
    if (pMas == nullptr)
    {
        cout << " ������" << endl;
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

//���������� �������
void addColumn(int** pArray, int rowCount, int columnCount, int index)
{
    if (pArray == nullptr)
    {
        cout << " ������!" << endl;
        return;
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            //�������� ������ ��������
            if (j == index)
            {
                for (int k = columnCount; k > index; k--)
                {
                    pArray[i][k] = pArray[i][k - 1];
                }
                //��������� ����������� ������� 0��
                pArray[i][j] = 0;
            }
        }
    }
}

//�������� �������
void deleteColumn(int** pArray, int rowCount, int columnCount, int index)
{
    if (pArray == nullptr)
    {
        cout << " ������!" << endl;
        return;
    }

    for (int i = 0; i < rowCount; i++)
    {
        //j < columnCount, ����� � ������� ������ ������� ��������� �����,
        //������� �� ����� ��� ������, � �� �������� ���������� �������� ��� �� ��������.
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

    cout << "\n\n 1) �������� �������, ����������� �������" << endl;
    cout <<"     ����������� ������� � ��������� �������." << endl;
    cout << " 2) �������� �������, ��������� ������� ����-" << endl;
    cout << "    ������� ������� �� ���������� ������." << endl;

    int rowCount;
    int columnCount;
    int const startColumnCount = 100;

    cout << "\n ������� ���������� ����� ������� :";
    cin >> columnCount;
    cout << " ������� ���������� �������� ������� :";
    cin >> rowCount;
   
    int userIndex;
    int** simpleMas = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
    {
        simpleMas[i] = new int[startColumnCount];
    }
    InicMas(simpleMas, rowCount, columnCount);
    cout << " �������� ������: " << endl<<endl;

    ShowMas(simpleMas, rowCount, columnCount);
    //������� ����� �������� ��� � ��������, ��� � � ����� �������.

    cout << "\n ����� ������� �� ������ ��������: " << "\n ������� ����� �� 0..." << columnCount<<"  :   ";
    cin >> userIndex; cout << endl;

    if (userIndex >= 0 && userIndex <= columnCount)
    {
        columnCount++;
        addColumn(simpleMas, rowCount, columnCount, userIndex);
        ShowMas(simpleMas, rowCount, columnCount);
    }
    else
    {
        cout << " �������� ��������" << endl;
    }
    //�������� �������
    cout << "\n ����� ������� �� ������ �������: " << " ������� ����� �� 0..." << columnCount -1 << "  :   ";
    cin >> userIndex;
    if (userIndex >= 0 && userIndex < columnCount)
    {
        deleteColumn(simpleMas, rowCount, columnCount, userIndex);
        columnCount--;
        ShowMas(simpleMas, rowCount, columnCount);
    }
    else
    {
        cout << " �������� ��������" << endl;
    }
    //�������� �������
    for (int i = 0; i < rowCount; i++)
    {
        delete[] simpleMas[i];
    }
    delete[] simpleMas;

    system("pause");
    return 0;
}
