//����� ������� �������������� ���� ����� ����� �� 1 �� 1000
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
	float resultat;
	resultat = 0;
	// ������� ����� �� �����
	cout << "\n ����� ������� �������������� ���� ����� ����� �� 1 �� 1000" << endl;
	// ���������� ������
	for (int a = 1; a <= 1000; a++)
	{
		resultat = resultat + a;
	}
	resultat = resultat / 1000;
	cout << "\n ��������� = " << resultat << endl;
	return 0;
}