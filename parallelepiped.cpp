// ����� ���������������
#include <iostream>
#include <windows.h>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ��������� ����������
	float V, a, b, h;
	// ������� �����
	cout << " ����� ��������� ����� ��������������� - " << endl;
	cout << " ������� ������ ��������������� � (��) :";
	// ���������� ������ �����
	cin >> a;
	// ������� �����
	cout << " ������� ������ ��������������� � (��):";
	cin >> b;
	// ������� �����
	cout << " ������� ������ ��������������� � (��) :";
	cin >> h;
	// ��������� ����������
	V = a * b * h;
	// ������� ����
	cout << " ������ ->" << a <<" (��)" << endl;
	cout << " ������ ->"  << b<<" (��)" << endl;
	cout << " ������ ->"  << h <<" (��)" << endl;
	cout << " ����� ��������������� :" << V << " ���.�� " << endl;


	return 0;
}