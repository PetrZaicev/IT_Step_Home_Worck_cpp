// ������� ���� � ����
#include <iostream>
#include <windows.h>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ��������� ����������
	int Yaer, day;
	// ������� ����
	cout << "\n\ ������� ���: ";
	// ���������� ������ ���
	cin >> Yaer;
	/* ���������� �����������.
	��� �������� ���������� � ���� �������:
    ���� �� ������ 4, �� ��� ���� �� ������ 100,
    ���� ������ 400*/
	day= 365 + int((Yaer % 4 == 0 && Yaer % 100 != 0) || (Yaer % 400 == 0));
	cout << " � " << Yaer << " ���� " << day << " ����. \n\n"<<endl;

	return 0;
}