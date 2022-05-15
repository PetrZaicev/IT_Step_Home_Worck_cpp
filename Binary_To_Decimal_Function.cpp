/*�������� ������� ��� �������� �����, ����������� � �������� ����, � ���������� �������������. */
#include <iostream>
#include <windows.h>
using namespace std;

// ������� ��� �������� ����� �� ��������� � ����������
void Binary(unsigned short int numder)
{
	unsigned short int temp;
	for (temp = 32768; temp > 0; temp = temp / 2)
	{
		if (temp & numder) /*�������� ���������� � ( & ) ���������� ������ ��� ������� ��������
						   � ��������������� ����� ������� ��������. ���� ��� ���� ����� 1,
						   ��������������� ��� ���������� ��������������� ������ �������. �
						   ��������� ������ � ����.*/
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}

}

// ������� ������� ����� ������ � ���� � �������
enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SetColor(White, Black);
	cout << "\n\t\t ������� ��� �������� �����, ����������� � �������� ����, � ���������� �������������." << endl;
	cout << endl;

	// ������ ������� �����
	for (int i = 1; i <= 5; i++)
	{
		cout << " ";
	}
	for (int j = 1; j <= 108; j++)
	{
		cout << "*";
	}
	cout << endl;

	SetColor(Yellow, Black);

	cout << "\tvoid Binary(unsigned short int numder)" << endl;
	cout << "\t{" << endl;
	cout << "\t	unsigned short int temp;" << endl;
	cout << "\t	for (temp = 32768; temp > 0; temp = temp / 2)" << endl;
	cout << "\t	{" << endl;
	cout << "\t		if (temp & numder)";
	SetColor(Red, Black);
	cout << "/*�������� ���������� � ( & ) ���������� ������ ��� ������� ��������" << endl;
	cout << "\t	                            � ��������������� ����� ������� ��������.���� ��� ���� ����� 1," << endl;
	cout << "\t	                            ��������������� ��� ���������� ��������������� ������ �������.�" << endl;
	cout << "\t		                    ��������� ������ � ����.* /" << endl;
	SetColor(Yellow, Black);
	cout << "\t		{" << endl;
	cout << "\t			cout << 1; " << endl;
	cout << "\t }" << endl;
	cout << "\t		else" << endl;
	cout << "\t		{" << endl;
	cout << "\t			cout << 0;" << endl;
	cout << "\t }" << endl;
	cout << "\t }" << endl;
	cout << "\t }" << endl;
	cout << endl;

	SetColor(White, Black);
	cout << endl;

	// ������ ������ �����
	for (int i = 1; i <= 5; i++)
	{
		cout << " ";
	}
	for (int j = 1; j <= 108; j++)
	{
		cout << "*";
	}
	cout << endl;

	unsigned short int numder;
	cout << "\n     ������� ����� � ��������� �� 0 �� 65535 :";
	cin >> numder;
	cout << endl;
	cout << "     ����� � ���������� ������� ��������� - ";
	Binary(numder);
	cout << endl;

	return 0;
}