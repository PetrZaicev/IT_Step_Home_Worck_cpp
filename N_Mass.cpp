#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n � ���������� �������, ��������� �� N ������������ ����� ���������:" << endl;
    cout << " ����� ������������� ���������." << endl;
	cout << " ������������ ���������, ����������� ����� min � max ����������." << endl;
	cout << " ������������ ��������� � ������� ��������." << endl;
	cout << " ����� ���������, ����������� ����� ������ � ��������� �������������� ����������." << endl;

	int const size = 10;
	int masiv[size]{ -3, 5, -4, 9, 7, 2, -6, -8, 3, 6 };

	cout <<"\n ���������:" << endl;
	cout<<"� ����� ������������� ���������." << endl;
	cout<<"� ������������ ���������, ����������� ����� min � max ����������." << endl;
	cout<<"� ������������ ��������� � ������� ��������." << endl;
	cout<<"� ����� ���������, ����������� ����� ������ � ��������� �������������� ����������." << endl;
	cout <<" �������� ������" << endl;

	for (int l = 0; l < size; l++)
	{
		cout << masiv[l] << " ";
	}
	cout << endl;
	int sum = 0, min = 0, max = 0, proiz = 1, proizChot = 1;
	int sumOtr = 0, otr1 = 0, otrPosl;
	for (int i = 0; i < size; i++)
	{
		if (min > masiv[i])
		{
			min = masiv[i];
		}
		else if (max < masiv[i])
		{
			max = masiv[i];
		}
		if (masiv[i] < 0)
		{
			if (otr1 > 0)
			{
				sum += masiv[i];
			}
			sumOtr += masiv[i];
			otr1++;
			otrPosl = masiv[i];
		}
		if (masiv[i] % 2 == 0)
		{
			proizChot *= masiv[i];
		}
	}
	for (int j = 0; j < size; j++)
	{
		if (masiv[j] > min &&
			masiv[j] < max)
		{
			proiz *= masiv[j];
		}
	}
	cout << "����� ������������� ��������� = " << sumOtr << endl
		<< "������������ ���������, ����������� ����� min � max ���������� = " << proiz << endl
		<< "������������ ��������� � ������� �������� = " << proizChot << endl
		<< "����a ���������, ����������� ����� ������ � ��������� �������������� ���������� = " << sum - otrPosl << endl;
}