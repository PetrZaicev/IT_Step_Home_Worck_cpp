/*����� ���������� �����������, ���� �����
���� ��� ��������� ����� ��� ������. �������� �������
������ ����� ����� �� ��������� ���������.*/

#include <iostream>
#include <windows.h>
using namespace std;

int digit(int  x, int  y)
{
    for (int  i = x; i < y; i++)
    {
        int  result = 0;
        for (int  j = 1; j < i; j++)
        {
            if ((i % j) == 0)
            {
                result += j;
            }
        }
        if (result == i && result)
        {
            cout <<" "<< result << " \n";

        }
    }
    return 0;
}

int  main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\n ����� ���������� �����������, ���� �����" << endl;
    cout << " ���� ��� ��������� ����� ��� ������. �������� �������" << endl;
    cout << " ������ ����� ����� �� ��������� ���������." << endl;
    int  x=0, y=0;
    cout << "\n ������� �������� ��� ������ :" << endl;
    cout << " ������� ����� ����� ������ ��������� - ";
    cin >> x;
    cout << "  ������� ����� ����� ����� ��������� - ";
    cin >> y;
    int  res = digit(x, y);

    return 0;

}