/*��������� ���������� ���������� ��� �������������
��������������� �������� �� ������� S = v*t + (a*t2) / 2,
��� v � ��������, t � �����, � � ���������.*/
#include <iostream>
// ���������� ������������ ����
using namespace std;

// �������� �������
int main()
{
	// ���������� ���� ��������
	setlocale(LC_ALL, "rus");
	// ��������� ����������
	double S, v, t, a;
	// ������� �� ����� ����� "������� �������� � ��/�"
	cout << "������� �������� � ��/� - ";
	// ���������� ������ �������� ��������
	cin >> v;
	// ������� �� ����� ����� " ������� ����� � � "
	cout << "������� ����� � ����� - ";
	// ���������� ������ �������� �������
	cin >> t;
	// ������� �� ����� ����� " ������� ��������� � m/s"
	cout << "������� �������� ��������� � m/s - ";
	// ���������� ������ ��������� � m/s
	cin >> a;
	// ���������� ����������
	S = v*t+(a*(t*2))/2;
	// ������� ���������
	cout << "���������� ���������� ��� ������������� ��������������� �������� (km)  - " << S<<"\n\n\n";

	return 0;


}