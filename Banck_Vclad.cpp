/*���������, ������� ���������� ������������
������ ����� ��������� ������ � ����, � ����� ������� �������, ������� ����������� ����. ���������� ����� �����,
������������� ������ ��������� ������ �����.*/
#include <iostream>
// ���������� ���������� ����
using namespace std;

	// �������� �������
int main()
{
	// ���������� ��������
	setlocale(LC_ALL, "rus");
	// ��������� ���������� Cash - �����, percent - ��������,
	// Yaer_per - ������� �������, Month_cash -������� � �����
	double Cash, percent, Yaer_per, Month_cash;
	percent = 6.5;
	// ������� ����� �� ����� -�������� ����� � ���� 6.5% �������
	cout << "\n\n" << "�������� ����� 6.5 % �������." << "\n";
	// ������� ����� "������� ����� ������� � ����."
	cout << "������� ����� ������ � ����: "; 
	// ���������� ������ �����
	cin >> Cash;
	// ���������� ������
	Yaer_per = (Cash/100)*6.5;
	Month_cash = Yaer_per / 12;
	// ������� ����� �� ����� "��� ������� �������, ������� ����������� ���� =
	cout << "��� ������� �������, ������� ����������� ���� = " << Yaer_per << " ���� "<<"\n";
	// ������� ����� "���� ����������� ������� ������ ="
	cout << "���� ����������� ������� ������ = " << Month_cash<<" ����" << "\n\n";
	
	return 0;

	}
