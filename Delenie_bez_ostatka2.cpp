/*������������ ������ ����� �����. ���������� ������� ���
����� �����, �� ������� �������� ����� �������� ��� �������.*/
#include <iostream>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	setlocale(LC_ALL,"rus");
	// �������� ���������� 
	int digit;
	// ������� ����� �� �����
	cout << "\n ������������ ������ ����� �����. ���������� ������� ���" << endl;
	cout << "\n ����� �����, �� ������� �������� ����� �������� ��� �������." << endl;
	cout << " ������� ����� - ";
	cin >> digit;
	for (int i = 2; i < digit; i++)
	{
		if (digit % i != 0)
			continue;
		cout << i << endl;
	}
	return 0;
}