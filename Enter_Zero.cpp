/*. ������������ � ���������� ������ �����.
��������� �� ����� � ������� �� �����, ��� ������ ������������ ������ ����.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\n ������� � ���������� �����." << endl;
	cout << " ��� ������ ������� <0> ��������� ��������������� � ������� ����� ���� ��������� �����." << endl;

	long long a, s;
	a = 1; s = 0;
	while (a != 0)
	{
		cout << " ";
		cin >> a;
		s = s + a;
	}
	cout << " " << s << endl;;
	cout <<" " << endl;
	return 0;
}