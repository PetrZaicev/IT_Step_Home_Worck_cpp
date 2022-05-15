/*�������� �������, ������� ����������, �������� �� ����������� ������������ �����.*/
#include <iostream>
#include <windows.h>
using namespace std;

#include <iostream>

using namespace std;

bool isHappy(int number) 
{
	if (number < 100000 || number > 999999)
		return false;
	int sum1, sum2;
	sum1 = number % 10 + (number / 10) % 10 + (number / 100) % 10;
	sum2 = (number / 1000) % 10 + (number / 10000) % 10 + (number / 100000) % 10;
	if (sum1 == sum2)
		return true;
	return false;
}

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (1)
	{
		cout << "\n �������� �������, ������� ���������� " << endl;
		cout << " �������� �� ����������� ������������ �����." << endl;
		int n = 0;
		cout << endl;
		cout << " ������� ����� ���� �����: ";
		cin >> n;
		if (isHappy(n))
			cout << " ��� ���������� �����!";
		else
			cout << " ����� �� ����������.";
		cout << endl;
		system("pause");
		system("cls");
	}
}