// ��� ��������
#include <iostream>
// ������������ ����
using namespace std;

// �������� ������
int main()
{
	// ���������� ���������
	setlocale(LC_ALL, "rus");
	// ��������� �����������
	int manager1, manager2, manager3, topManager;
	float pay1, pay2, pay3;
	float temp = 0;
	// ������� ����� �� �����
	cout << " ���������  ������� ���������� �����" << endl;
	cout << "\t���������� �� ��������." << endl;
	// ��������  ����� �� �����
	cout << "\n ������� ����� ������ ������� ���������: ";
	// ���������� ������ �����
	cin >> manager1;
	// ������� ���� �� �����
	cout << " ������� ����� ������ ������� ���������: ";
	// ���������� ������ �����
	cin >> manager2;
	// ������� ���� �� �����
	cout << " ������� ����� ������ �������� ���������: ";
	// ���������� ������ �����
	cin >> manager3;
	// ���������� �������� ������� ���������
	//�������� ������� ���������
	if (manager1 < 500)
	{
		pay1 = 200 + manager1 * 0.003;
	}
	else if (manager1 >= 500 && manager1 < 1000)
	{
		pay1 = 200 + manager1 * 0.005;
	}
	else
	{
		pay1 = 200 + manager1 * 0.008;
	}
	// �������� ������� ���������
	if(manager2 < 500)
	{
		pay2 = 200 + manager2 * 0.003;
	}
	else if (manager2 >= 500 && manager2 < 1000)
	{
		pay2 = 200 + manager2 * 0.005;
	}
	else
	{
		pay2 = 200 + manager2 * 0.008;
	}
	// �������� �������� ���������
	if (manager3 < 500)
	{
		pay3 = 200 + manager3 * 0.003;
	}
	else if (manager3 >= 500 && manager3 < 100)
	{
		pay3 = 200 * manager3 * 0.005;
	}
	else
	{
		pay3 = 200 + manager3 * 0.008;
	}
	// ���������� ���������
	if (manager1 > manager2)
	{
		topManager = 1;
		temp = manager1;
	}
	else
	{
		topManager = 2;
		temp = manager2;
	}
	if (manager3 > temp)
	{
		topManager = 3;
	}
	// �������� ������� ���������
	switch (topManager)
	{
	case 1:
		pay1 = pay1 + 200;
		break;
	case 2:
		pay2 = pay2 + 200;
		break;
	case 3:
		pay3 = pay3 + 200;
		break;
	}
	// ������� ���������� �� �����
	cout << " ������� �������� �� �������� - " << topManager;
	cout << "\n �������� ����������, �� ����������� ������ : " << endl;
	cout << " �������� ������� ��������� - " << pay1 <<" $" << endl;
	cout << " �������� ������� ��������� - " << pay2 <<" $" << endl;
	cout << " �������� �������� ��������� - " << pay3 <<" $" << endl;
	return  0;
}