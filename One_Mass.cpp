/*� ���������� �������, ����������� ���������� �������,
���������� ����������� � ������������ ��������.*/
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\n � ���������� �������, ����������� ���������� �������," << endl;
	cout << " ���������� ����������� � ������������ ��������." << endl;
	cout << endl;

	// ��������� ����������
	int const n =20; // ������ �������
	// �������� ������� 
	int const a = 1;  // ����������� �����
	int const b = 100; // ������������ �����
	int mass[n];
	int min, max;
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		mass[i] = a + rand() % (b-a);
		cout  << " " << mass[i] << " ";
	}
	min = mass[0];
	max = mass[0];
	for (int i = 1; i < n; i++)
	{
		if (mass[i] > max)
		{
			max = mass[i];
		}
		if (mass[i] < min)
		{
			min = mass[i];
		}

	}
	cout << endl;
	cout << "\n ����������� ������� �������: " << min << endl;
	cout<<" ������������ ������� �������: " << max << endl;
	return 0;


	return 0;
}