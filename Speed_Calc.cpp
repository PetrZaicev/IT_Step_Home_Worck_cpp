/*���������, �����������, � ����� ���������
����� �������� ���������.*/
#include <iostream>
// ���������� ������������ ����
using namespace std;

// �������� �������
int main()
{
	// ���������� ��������
	setlocale(LC_ALL, "rus");
	// ��������� ���������� Speed -��������, Dist -���������, Time -�����,
	// minutes -������, seconds -�������
	double Speed, Dist, Time;
	int minutes, seconds;
	cout <<"\n\n" << "���������� �������� ����.";
	cout << " ������� ����� ��������� (������) = ";
	cin >> Dist;
	cout << "������� ����� (���.���) = ";
	cin >> Time;
	minutes = Time;
	seconds = (Time -minutes) * 100;
	Time = (minutes * 60) + seconds;
	Speed = Dist / Time * 3.6;
	cout << "���������: " << Dist << "\n";
	cout << "����� " << minutes << " ��� " <<
		seconds << " ��� = " << Time <<
		" ���\n";
	cout << "�� ������ �� ��������� " <<
		Speed << "��/�\n\n\n";
	return 0;
}