// ��������� ������ ��������� ����������
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
	int MyOperator, OpanentOp, Min;
	float PriceMega, PriceYota, PriceTele;
	PriceMega = 2.00;
	PriceYota = 1.50;
	PriceTele = 1.60;
	// ������ ����� �� �����
	cout << "\n\n\"1 - MegaFon \n";
	cout << "\"2 - Yota \n";
	cout<<"\"3 - Tele2 \n";
	cout << " ������� ����� ������ ��������� : ";
	// ���������� ������ ������ ���������
	cin >> MyOperator;
	// ������� ���� �� �����
	cout << "\"1 - MegaFon \n";
	cout << "\"2 - Yota \n";
	cout << "\"3 - Tele2 \n";
	cout << " ������� ��������� �������� ";
	cin >> OpanentOp;
	// ������� ���� �� �����
	cout << " ������� ����������������� ������ (���.) ";
	cin >> Min;
	// ���������� ����������
	if (MyOperator == OpanentOp)
	{
		cout << " ���������� ����� ������ ���� . \n";
	}
	else if (OpanentOp == 1)
	{
		cout << " ��������� ������ �� �������� MegaFon -  " << Min * PriceMega << " ���.\n";
	}
	else if (OpanentOp == 2)
	{
		cout << " ��������� ������ ������ �� �������� Yota -  " << Min * PriceYota << " ���.\n";
	}
	else if (OpanentOp == 3)
	{
		cout << " ��������� ������ �� �������� Tele2 - " << Min * PriceTele << " ���.\n";
	}
	else
	{
		cout << " �������������� �������� ! \n";
	}
	return 0;


}