// ���������� ������
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
	int simbol_nuber;
	char simbol;
	// ������� �� �����
	cout << "����������, ������� ������ :"<<endl;
	// ���������� ������ �����
	cin >> simbol;
	// �������
	simbol_nuber = (int)simbol;
	if (((simbol_nuber >= 65) && (simbol_nuber <= 90)) ||
		((simbol_nuber >= 97) && (simbol_nuber <= 122)))
	{
		cout << "�� ����� ������"<<endl;
	}
	else if ((simbol_nuber >= 48) && (simbol_nuber <= 57))
	{
		cout << "�� ����� �����"<<endl;
	}
	else if ((simbol_nuber == 33) || ((simbol_nuber >= 44) &&
		(simbol_nuber <= 46)) || (simbol_nuber == 58) ||
		(simbol_nuber == 59) || (simbol_nuber == 63))
	{
		cout << "�� ����� ���� ����������"<<endl;
    }
	else
	{
		cout << "�� ����� ����������� ������"<<endl;
	}
	return 0;

}
       