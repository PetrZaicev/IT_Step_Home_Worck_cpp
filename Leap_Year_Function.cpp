#include <iostream>
#include <windows.h>
using namespace std;

bool LeapYear(int year) // ������� ����������� ����������� ����
{
    bool res = false;
    if (year % 4 == 0)
        res = true;
    if (year % 100 == 0)
        res = false;
    if (year % 400 == 0)
        res = true;
    return res;
}
int Date(int d, int m, int y) 
{
    int k = d;
    switch (m - 1)
    {
    case 12: k += 31;
    case 11: k += 30;
    case 10: k += 31;
    case  9: k += 30;
    case  8: k += 31;
    case  7: k += 31;
    case  6: k += 30;
    case  5: k += 31;
    case  4: k += 30;
    case  3: k += 31;
    case  2: if (LeapYear(y)) k += 29; else k += 28;
    case  1: k += 31;
    }
    k += (y - 1) * 365 + ((y - 1) / 4);
    return k;
}
int Difference(int d1, int d2, int m1, int m2, int y1, int y2)  // ������� ����� ������
{
    int k = Date(d1, m1, y1) - Date(d2, m2, y2);
    return k;
}



int main()
{
    setlocale(LC_ALL, "rus");

    int d1, d2, m1, m2, y1, y2;
    string S(80,'*');
    cout <<"\n" << S;
    cout << "\n  �������, ������� ��������� ��� ���� (�.�.������� ��������� ����� ����������)" << endl;
    cout << " � ��������� �������� � ���� ����� ����� ������." << endl;
    cout << " ��� ������� ���� ������ ���������� ����� �������� �������, " << endl;
    cout << " ������� ����������, �������� �� ��� ����������." << endl;
    string A(80, '*');
    cout << "\n" << S;
   


    cout << "\n ������� ������ ����: ";
    cin >> d2;
    cout << " ������� ������ �����: ";
    cin >> m2;
    cout << " ������� ������ ���: ";
    cin >> y2;
    cout << " ������� ������ ����: ";
    cin >> d1;
    cout << " ������� ������ �����: ";
    cin >> m1;
    cout << " ������� ������ ���: ";
    cin >> y1;
    cout << " �������� � ���� ����� ����� ������ ���������� " << Difference(d1, d2, m1, m2, y1, y2) << " ����.\n"<<endl;
    system("PAUSE");
}