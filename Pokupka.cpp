// Pokupka
#include <iostream>
// ����������� ������������ ����, � ������� ���� cout<<
using namespace std;
// ������� �������
int main()
{
	//��������� ���������� Discount
	float Discount=0.05;
	// ��������� ���������� Cost
    float Cost = 10.50;
	// ����������� ������ ���� ������
	cout << "What's the cost?\n";
	// ���� �������� � ���������� Cost
	cin >> Cost;
	// �������� ����������
	int Count = 5;
	// ����������� ������ ����������
	cout << "How much?\n";
	// ���� �������� � ���������� Count
	cin>> Count;
	// ��������� ���������� 
	float Price;
	// ��������� �������� ���������� Price
	Price = Count * Cost - Count * Cost * Discount;
	// ������� �������� ��������� ������ �� �������
	cout << "Please, pay:" << Price << "\n";

	return 0;
}