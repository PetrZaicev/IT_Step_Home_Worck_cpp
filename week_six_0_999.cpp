/*���������� ���������� ����� ����� � ��������� �� 100
�� 999, � ������� ���� ��� ���������� �����.*/
#include <iostream>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	setlocale(LC_ALL, "rus");
	// ��������� ����������
	int number1, number2, number3,same, resN, temp;
	resN = 0;
	// ������� ����� �� �����
	cout << "\n ���������� ���������� ����� ����� � ��������� �� 100" << endl;
	cout << "    �� 999, � ������� ���� ��� ���������� �����. " << endl;
	for (int i = 100; i <= 999; i++)
	{
		same = 0;
		number3 = i % 10;
		temp = i / 10;
		number2 = temp % 10;
		number1 = temp / 10;
		if ((number1 == number2) &&
			(number1 != number3) &&
			(number2 != number3))
		{
			same++;
		}
		if ((number1 != number2) &&
			(number1 == number3) &&
			(number2 != number3))
		{
			same++;
		}
		if ((number1 != number2) &&
			(number1 != number3) &&
			(number2 == number3))
		{
			same++;
		}
		if (same == 1)
		{
			cout << i << "\n";
			resN++;
		}
	}
	cout << " ����� � 2 ����������� �������:" << resN << endl;
	return 0;
}
