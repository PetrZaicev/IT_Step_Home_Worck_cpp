/*������������ ������ ��� ������� ���������.
��������� ����� ���� ����� ���������.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n ������������ ������ ��� ������� ���������." << endl;
	cout << " ��������� ����� ���� ����� ���������" << endl;
	long long a, b;
	cout << "\n ������� ������ ���������: ";
	cin >> a;
	cout << " ������� ����� ���������: ";
	cin >> b;
	long long res = 0;
	for (long long i = a; i <= b; i++)
	{
		res += i;
	}
	cout << " ����� ����� � �������� ��������� ����� = " <<" "<< res << endl;
	cout << endl;
	return 0;
}