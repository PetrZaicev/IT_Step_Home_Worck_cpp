// ������, ������� �������� ������� �� ��������
#include <iostream>
// ���������� ������������ ����
using namespace std;

// �������� �������
int main()
{
	// ���������� ��������
	setlocale(LC_ALL, "rus");
	// ��������� ����������
	int Day = 86400;
	float Num, H, Min, Sec, Lost_Time, Lost_H, Lost_Min, Lost_Sec;
	// ������� ���� �� ����� "������� ����� � ��������"
	cout << "\n ������� ����� � �������� : ";
	// ���������� ������ �����
	cin >> Num;
	// ���������� ������
	H = int(Num / 3600);
	Min = int(Num / 60 - (H * 60));
	Sec = Num - (Min * 60) - (H * 3600);
	// ������� ���� "�����"
	cout << " ����� : ";
	// ������� ���������� �� ����� "������� �����"
	cout << H << "�. " << Min << "���. " << Sec<<"���. " << "\n";
	Lost_Time = 86400 - Num;
	Lost_H = int(Lost_Time / 3600);
	Lost_Min =int (Lost_Time / 60 - (Lost_H * 60));
	Lost_Sec = Lost_Time - (Lost_Min * 60) - (Lost_H * 3600);
	// ������� ����� "����� �� ��������"
	cout << " ���������� ����� �� �������� : ";
	// ������� ���������� �� �����
	cout << Lost_H << "�. " << Lost_Min << "���. " << Lost_Sec<<"���. " << "\n\n";

	return 0;

	

}