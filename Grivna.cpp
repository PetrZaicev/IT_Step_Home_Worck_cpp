// ������ � �������
#include <iostream>
#include <windows.h>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	SetConsoleCP(2151);
	SetConsoleOutputCP(1251);
	// ��������� ����������
	int Grivna, Cop;
	// ������� ����� �� �����
	cout << " ������� ���� � �������" << endl;
	cout << " ���������: 17 ������ 28 ������, ��� �����������: 15 ������ 228 ������" << endl;
	cout << " ������� ������ :";
	// ���������� ������ ������
	cin >> Grivna;
	cout << " ������� ������� :";
	// ���������� ������ �������
	cin >> Cop;
	cout <<" "<< Grivna + (Cop / 100) << " ������ " << Cop % 100 << " ������" << endl;

	return 0;
}