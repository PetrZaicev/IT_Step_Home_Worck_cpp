/*�������� ���������, ������� ������� �� ����� �����
�������� ��������, ������������ ��� ��������������, ������ ����� ����� ���������� ������, ��������� � ��������.
������� � ������������� ������������ ����� ����.*/
#include <iostream>
#include <windows.h>
using namespace  std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ��������� ����������
	char userSymbol;
	int lineType, speedID, delay;

	// ������� �� ����� �����
	cout << "\n ���������, ������� ������� �� ����� ����� �������� ��������," << endl;
	cout << " ������������ ��� ��������������, ������ ����� ����� ���������� ������,";
	cout<<"��������� � ��������." << endl;
	cout << "\n ������� �������� �������� ����� �������� ����� - ";
	// ���������� ������ ������
	cin >> userSymbol;
	cout << endl;
	// ������� ���� �� �����
	cout << " �������� �������� �������� ��� ��������� : " << endl;
	cout << " 1 -> ��������."<<endl;
	cout << " 2 -> ���������." << endl;
	cout << " 3 -> ������." << endl;
	cout << " ������� �������� �������� - ";
	// ���������� ������ �������� ��������
	cin >> speedID;
	cout << endl;

	// ������������� �������� ��������
	switch (speedID)
	{
	case 1:
		delay = 1000;
		break;
	case 2:
		delay = 500;
		break;
	case 3:
		delay = 0;
		break;
	default:
		cout << " �������� �������� ��������!" << endl;
		cout << " ����� ����� ���������� ������!" << endl;
		delay = 0;
	}
	// ������� ����� �� �����
	cout << " �������� ��� �����: " << endl;
	cout << " 1-> ������������ �����." << endl;
	cout << " 2-> �������������� �����." << endl;
	cout << " ������� �������� - ";
	// ���������� ������ ��������
	cin >> lineType;
	cout<<endl;

	// ������� ������ �����
	switch (lineType)
	{
	case 1:
	{
		for (int i = 0; i < 10; i++)
		{
			Sleep(delay);
			cout << userSymbol << endl;
		}
		break;
	}
	case 2:
	{
		for (int i = 0; i < 10; i++)
		{
			Sleep(delay);
			cout << userSymbol;
		}
		cout << endl<<endl;
		break;
		
	}
	default:
		cout << " �������� �������� ������ �����!" << endl;
		cout << " ����� ����� ���������� �������������!" << endl;

		for (int i = 0; i < 10; i++)
		{
			Sleep(delay);
			cout << userSymbol;
		}
		cout << endl<<endl;
		
	}
	system("pause");
	return 0;
}