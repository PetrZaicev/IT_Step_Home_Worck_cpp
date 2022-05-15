// ������� ��������� ������
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <ctime>
using namespace std;

// ������� ��������� ������
int linSearch(int arr[], int requiredKey, int arrSize)  
{
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == requiredKey)
			return i;
	}
	return -1;
}
// ����� ������� 
void showArr(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << setw(4) << arr[i];
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}

	}
	cout << endl << endl;
}

int main()
{
	SetConsoleCP(1251);                                     // ���������� ��������
	SetConsoleOutputCP(1251);
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // ��������� ����� ������ � ����

	const int arrSize = 100; // ���������� ���������� �������� � �������
	int arr[arrSize];       // ������
	int requiredKey = 0;    // ������� �������� (����)
	int nElement = 0;       // ����� �������� �������
	srand(time(NULL));      /*��������� srand(time(NULL)) ������������� � �������� ���� ������� �����.
	                        //���� ����� ����� ������������ ��� ����, ����� ��� ������ �������� ����������
	                        //��������������� ����� ���� ������ ��� ������ ���� �, ��������������, ������ ��� 
	                        ���������� ��������.*/

	cout << "\n\t ������� ��������� ������." << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN); // ������ ���� ������


	cout << "\n\n int linSearch(int arr[], int requiredKey, int arrSize)" << endl;
	cout << "{ " << endl;
	cout << "	for (int i = 0; i < arrSize; i++)" << endl;
	cout << "	{" << endl;
	cout << "		if (arr[i] == requiredKey)" << endl;
	cout << "			return i;" << endl;
	cout << " }" << endl;
	cout << "	return -1;" << endl;
    cout << " } " << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN |
		FOREGROUND_BLUE); // ������ ���� ������

	//������ ����. ����� � ������ �� 1 �� 100
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	cout << endl << endl;
	showArr(arr, arrSize); // ����� ������� �� ����� 

	cout << "  ����� ����� ���������� ������? ";
	cin >> requiredKey; // ���� �������� �����

	//����� �������� ����� � ������ ������ ��������
	nElement = linSearch(arr, requiredKey, arrSize);

	if (nElement != -1)
	{
		//���� � ������� ������� ������� ����� - ������� ������ �������� �� �����
		cout << " �������� " << requiredKey << " ��������� � ������ � ��������: " << nElement << endl;
	}
	else
	{
		//���� � ������� �� ������� ������� �����
		cout << " � ������� ��� ������ ��������" << endl;
	}
	return 0;
}



