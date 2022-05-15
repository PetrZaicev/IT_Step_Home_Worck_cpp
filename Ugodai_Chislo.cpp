/*�������� ���� ������� �����. ���������
���������� ����� � ��������� �� 1 �� 500. ������������
�������� ��� �������. ����� ������ ������� ���������
������ ���������, ������ ��� ������ ��� ����� �����������. � ����� ��������� ������ ����������: �� �������
������� ������� �����, ������� ������� ��� ������.
������������� ����� �� 0, � ������, ���� ������������
������� ��������� �����.*/

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int entry, go = 0;

	srand(time(NULL));

	cout << "���� ������� �����." "\n" "��������� ���������� ����� � ��������� �� 1 �� 500. ����������� ��� �������""\n"
		"� ������ ���� ������� ��������� ����� ����� = 0""\n""�����!!!";
	int secret = rand() % 500 + 1;
	unsigned int start_time = clock();
	do {
		cout << "������ ����� (�� 1 �� 500): ";
		cin >> entry;
		if (entry < 0 ||
			entry >500)
		{
			cout << "�������� �� �������� ���������� ������!!!\n";
		}
		else if (entry == 0)
		{
			break;
		}
		else if (secret < entry)
		{
			cout << "��������� ����� ������\n";
		}
		else if (secret > entry)
		{
			cout << "��������� ����� ������\n";
		}
		go++;
	} while (secret != entry);
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	if (entry == 0)
	{
		cout << "�� ���������\n";
	}
	else
	{
		cout << "��� ������������!!!\n";
	}
	cout << "�� ��������� " << go << " �������" "\n"
		<< "� " << search_time / 1000 << " ������" "\n";
	return 0;
}
