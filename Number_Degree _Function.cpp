/*�������� �������, ������� ��������� ���
���������: ��������� ������� � ���������� �������, �
��������� ������� ����� �� ������ ���������� ������*/
#include <iostream>
#include <windows.h>
using namespace std;

int powInnumber(int number, int powNum)
{
    if (powNum == 0)
        return 1;
    if (powNum == 1)
        return number;
    int result = number;
    for (int i = 0; i < powNum - 1; i++)
        result *= number;
    return result;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "\n �������, ������� ��������� ��� ���������:" << endl;
    cout << " ��������� ������� � ���������� �������, � ��������� ������� ����� �� ������ ���������� ������" << endl;
    int number, powNum;
    cout << "\n ������� �����  : ";
    cin >> number;
    cout << " ������� ������� � ������� ����� �������� ����� : ";
    cin >> powNum;
    cout << " ��������� = " << powInnumber(number, powNum) << endl;

    return 0;
}