/*���������� ���������� ����� ����� � ��������� �� 100 ��
999, � ������� ��� ����� ������.*/
#include <iostream>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	setlocale(LC_ALL, "rus");
	// ��������� ����������
	int number1, number2, number3, resN, temp;
	resN = 0;
	// ������� ����� �� �����
	cout << "\n ���������� ���������� ����� ����� � ��������� �� 100 ��" << endl;
	cout << "           99, � ������� ��� ����� ������." << endl;
	for (int i = 100; i <= 999; i++)
	{
		number3 = i % 10;
		temp = i / 10;
		number2 = temp % 10;
		number1 = temp / 10;
		if ((number1 != number2) &&
			(number1 != number3) &&
			(number2 != number3))
		{
			resN++;
		}
	}
	cout << "\n ���������� ����� � ������� �������: " << resN << endl;
	return 0;
}
