/*� ���������� �������, ����������� ���������� �������
� �������� ������������� ���������, ����� ����� ���������,
�������� ������� ������ ���������� �������������.*/
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "\n � ���������� �������, ����������� ���������� �������" << endl;
	cout << " � �������� ������������� ���������, ����� ����� ���������," << endl;
	cout << " �������� ������� ������ ���������� �������������." << endl;

	int const n = 10;
	int mass[n];
	int a, b, sum, endD;
	srand(time(NULL));

	cout << "\n ������� ������ ��������� ��� ��������� ����� - ";
	cin >> a;
	cout << " ������� ����� ��������� - ";
	cin >> b;
	cout << " ������� ��� �������� - ";
	cin >> endD;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		mass[i] = a + rand() % (b - a);
		cout <<" " << mass[i] << " ";
	}
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (mass[i] < endD)
		{
			sum = sum + mass[i];
		}

	}
	cout << endl;
	cout << "\n ����� ��������� �������� ������� ������ ���������� ������������� = " << sum;
	cout << endl;
	return 0;
}