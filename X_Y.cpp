/*��������, ������� ����������� ��� ����� �����
x � y, ����� ���� ��������� � ������� �������� x � ������� y.*/
#include <iostream>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	setlocale(LC_ALL, "rus");
	// ����������� ����������
	int x, y, i;
	float Num;
	Num = 1;
	// ������� ����� �� �����
	cout << "\n ��������, ������� ����������� ��� ����� ����� x � y, " << endl;
	cout << " ����� ���� ��������� � ������� �������� x � �������" << endl;
	cout << "\n ������� ����� X - ";
	// ���������� ������ �����
	cin >> x;
	// ������� ���� �� �����
	cout << " ������� ����� Y - ";
	// ���������� ������ �����
	cin >> y;
	if (y == 0)
	{
		Num = 1;
	}
	else
	{
		i = 1;
	}
	while (i <= abs(y))
	{
		Num = Num * x;
		i = i + 1;
	}
	if (y < 0)
	{
		Num = 1 / Num;
	}
	// ������� ��������� �� �����
	cout << " ��������� = " << Num;
	return 0;
}