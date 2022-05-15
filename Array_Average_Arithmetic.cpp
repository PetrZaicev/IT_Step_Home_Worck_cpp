#include <iostream>
#include <windows.h>
#include <iomanip>
#include <time.h>
using namespace std;

// ������� ���������� �������� ���������������
double average(const int* arrayPtr, int size_array) 
{
	int sum = 0; // �������� ����� ��������� �������
	for (int counter = 0; counter < size_array; counter++)
	{
		sum += arrayPtr[counter]; // ����������� �����
	}

	return (double)sum / size_array; // ����������� ������� ��������������
}

// ������ ������� �����
void LIne(int i, char t)
{
	for (int j = 1; j <=t; j++)
	{
		cout << "*";
	}
}

// �������� ����� ������ � ����
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
	setlocale (LC_ALL, "rus");
	srand(time(0)); // ������������
	const int length = 20; // ������ �������
	int arr[length]; // �������� ������ ���������������� �������
	setlocale(LC_ALL, "");
	cout << "\n �������� �������, ������������ �������" << endl;
	cout << " �������������� ��������� ������������� �� �������." << endl;

	cout << endl;
	SetColor(Yellow, Black);
	LIne('*',120);
	cout << endl;
    cout << "\t double average(const int* arrayPtr, int size_array)";
	SetColor(Red, Black);
    cout<<"// ������� ���������� �������� ���������������" << endl;
	SetColor(Yellow, Black);
	cout << "\t{"<<endl;
	cout << "\t	int sum = 0;";
	SetColor(Red, Black);
	cout<<"// �������� ����� ��������� �������"<<endl;
	SetColor(Yellow, Black);
	cout << "\t        for (int counter = 0; counter < size_array; counter++)"<<endl;
	cout << "\t       {"<<endl;
	cout << "\t	sum += arrayPtr[counter];";
	SetColor(Red, Black);
	// ����������� �����"<<endl;
	SetColor(Yellow, Black);
	cout << "\t "<<endl;
	cout << "\t       }" << endl;
	cout << "\t  return (double)sum / size_array;";
	SetColor(Red, Black);
	cout<<"// ����������� ������� ��������������"<<endl;
	SetColor(Yellow, Black);
	cout << "\t}"<<endl;
	cout << endl;

	LIne('*', 120);
	SetColor(White, Black);
	cout << endl;
	for (int counter = 0; counter < length; counter++)
	{
		arr[counter] = rand() % 100+1; // ������������� ������� ��������� ������ � ��������� [0 -100]
		cout <<" " << arr[counter] << " "; // ������ �������� �������
	}
	

	cout << "\n ������� �������������� = " << average(arr, length) << endl<<endl; // ������ �������
	system("pause");
	return 0;
}


