/*������������ ������ ����� ����� �����. ���������� ��
����� ������ ����� ������� ��� ����� 3 � 6 � ������� �������
�� �����.
��*/
#include <iostream>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	setlocale(LC_ALL, "rus");
	// ��������� ����������
	int number, digit, i, newNumber;
	i = 0;
	newNumber = 0;
	// ������� ����� �� �����
	cout << "\n          ������������ ������ ����� ����� �����. ���������� ��" << endl;
	cout << " ����� ������ ����� ������� ��� ����� 3 � 6 � ������� ������� �� �����." << endl;
	cout <<  "\n ������� ����� ����� : ";
	// ���������� ������ �����
	cin >> number;
	while (number > 0)
	{
		digit = number % 10;
		if ((digit != 3) && (digit != 6))
		{
			newNumber = newNumber + digit * pow(10, i);
			i++;
		}
		number = number / 10;
	}
	cout << " ����� ����� =  " << newNumber<<endl;
	cout << "\n  ������� ���������, ����� ��������� ����� �� �����?)\a" << endl;
	cout << "        � �������� ������� �� ��������" << endl;

	return 0;	
}