// Project DayIn_2000Year
#include <iostream>
// ���������� ������������ ����, � ������� ���� cout<<
using namespace std;
// ������� �������
int main()
{
	// ����� ������ ������
	cout << "\n";
	// ��������� ��������� ��������� - � 2000 ���� 366 �����, � ������ 24 ����
	int Day_in2000Year = 366;
	int HourInDay = 24;
	// ��������� ��������� ����������
	int HourIn_Yaer2000;
	// ��������� ������� �������� �
	// �������� ��� � ���������� HourIn_Yaer2000
	HourIn_Yaer2000 = Day_in2000Year * HourInDay;
	// ������� �������� ���������� 
	//HourIn_Yaer2000 �� �����
	cout << "\t\t In 2000 Yaer"  <<HourIn_Yaer2000;
	cout << " hours\n";
	return 0;
}