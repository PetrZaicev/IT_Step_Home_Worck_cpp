/* ��������� ��� ���������� �����
����� ����� �� (a) �� 500*/
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
	int a, sum;
	sum = 0;
	// ������� ����� �� �����
	cout << "\n ��������� ��� ���������� ����� ����� ����� ��(a) �� 500" << endl;
	cout << "\n ������� ����� ����� - ";
	// ���������� ������ �����
	cin >> a;
	// ���������� ����������
	while (a < 500)
	{
		sum = sum + a;
		a = a + 1;
	}
	//������� ����� �� �����
	cout << " ���� = " << sum + a << endl;
	return 0;
}