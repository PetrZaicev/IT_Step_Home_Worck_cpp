/*�������� �������, ������� �������� � �������� ���������� 2 ����� ����� � ���������� ����� �����
�� ��������� ����� ����.*/

#include "iostream"
#include <windows.h>
using namespace std;

unsigned long long f(int a, int b)
{
	return -(a + b) * (a - b + 1) / 2;
}
int main() 
{ 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned long long a, b;
	cout << "\n �������, ������� �������� � �������� ���������� 2 ����� �����"<<endl;
	cout << " � ���������� ����� ����� �� ��������� ����� ����." << endl;
	cout << "\n ������� ����� <a> - ";
	cin >> a;
	cout << " ������� ����� <b> - ";
	cin>> b;
	cout <<" "<< f(a, b) << endl;

	return 0;
}