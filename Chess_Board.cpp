/* ���������, ������� ������� �� ����� ���������
����� � �������� �������� ��������.*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int cellChess;
	cout << "\n  ���������, ������� ������� �� ����� ��������� "<<endl;
	cout << "\t����� � �������� �������� ��������." << endl;
	cout << "\n ������� ������ ������ ��������� ����� - ";
	cin >> cellChess; 
	cout << endl;

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			for (int m = 0; m < cellChess; m++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (j % 2 == 0)
					{
						for (int k = 0; k < cellChess; k++)
						{
							cout << "*";
						}
					}
					else
					{
						for (int k = 0; k < cellChess; k++)
						{
							cout << "-";
						}
					}
				}
				cout << "\n";
			}
		}
		else {
			for (int m = 0; m < cellChess; m++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (j % 2 == 0)
					{
						for (int k = 0; k < cellChess; k++)
						{
							cout << "-";
						}
					}
					else
					{
						for (int k = 0; k < cellChess; k++)
						{
							cout << "*";
						}
					}
				}
				cout << "\n";
			}
		}
	}
	cout << endl;
system("pause");
	return 0;
}