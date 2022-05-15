/*
�������� ���������, ������� ���������� ����� ������������ ��������� ��� ������������� ���������� ���������� 
(������������������� ������ ������ � 2) � �������
������. ��������� �� ������������ �� ������ 10 ��������,
���������� 1000 ��������� ���������, ��������� �������
����� ������������ ��� ������� ������ ����� ������������.
*/

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int const arSize = 1000;
    int const numberLimit = 1000;
    int Array[arSize];
    int buff;
    int count = 0;
    int temp = 0, srB=0,srV=0;
   
    for (int k = 1; k < 11; k++)
    {
        cout << " ��������� ������: "<<k << endl;
        //��������� ������ �� ��������� �����
        for (int i = 0; i < arSize; i++)
        {
            Array[i] = rand() % (numberLimit + 1);
            cout << " ��������� ������ [" << i << "] �"<<k<<" = " << Array[i] << endl;
        }

        for (int i = 0; i < arSize - 1; i++)
        {
            count = 0;
            {
                for (int j = 1; j < arSize - i; j++)
                {
                    if (Array[j] < Array[j - 1])
                    {
                        buff = Array[j];
                        Array[j] = Array[j - 1];
                        Array[j - 1] = buff;
                        count++;
                        srB = srB + 1;
                    }

                }
                //���� ����� �� ����, �� ������� �� �����
                if (count == 0)
                {
                    break;
                }
            }
        }

        cout << " ��������������� ������ ������� ��������: " << endl;
        //������� ��������������� ������
        for (int i = 0; i < arSize; i++)
        {
            cout << "��������������� ������ -���������[" << i << "] �" << k << " = " << Array[i] << endl;

        }
        cout << " ���������������� ������ ������� ������:" << endl;
        for (int i = 0; i < arSize; i++)
        {
            int smallerindex = i;

            for (int currentindex = 0; currentindex < arSize; ++currentindex)
            {
                if (Array[smallerindex] < Array[currentindex])
                {
                    swap(Array[smallerindex], Array[currentindex]);
                    srV = srV + 1;
                }
            }
        }
        for (int i = 0; i < arSize; ++i) {
            cout << " ��������������� ������ ������� ������ [" << i << "] �" << k << " = " << Array[i] << endl;

        }
        cout <<" ������� ����� ������������ ����������� ������� " << srB / 2 << endl;
        cout <<" ������� ����� ������������ ������� ������ " << srV / 2 << endl;
    }
    return 0;
}