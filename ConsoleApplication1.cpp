// �������
#include <iostream>
#include <windows.h>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	// ���������� ���������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ��������� ����������
	int pizzaID, drinkID, pizzaAmount, drinkAmount, temp;
	float pizzaPrice1, pizzaPrice2, pizzaPrice3, pizzaPrice4, selPizPrice;
	float drinkPrice1, drinkPrice2, drinkPrice3, selDrPrice;
	float sumOrder;
	// ����������� ��������
	pizzaPrice1 = 7.25;
	pizzaPrice2 = 8.5;
	pizzaPrice3 = 10.6;
	pizzaPrice4 = 14.8;

	drinkPrice1 = 1.69;
	drinkPrice2 = 2.5;
	drinkPrice3 = 3.25;

	sumOrder = 0;

	// ������� ����� �� �����
	cout << "\n �������� �����: " << endl;
	cout << " 1-> ������ ����: " << pizzaPrice1 << "$" << endl;
	cout << " 2-> ���������:   " << pizzaPrice2 << "$" << endl;
	cout << " 3-> ���������:   " << pizzaPrice3 << "$" << endl;
	cout << " 4-> ��� ������:  " << pizzaPrice4 << "$" << endl;
	cout << "\n ������� ����� ��������� ����� - ";
	// ���������� ������ ����� ��������� �����
	cin >> pizzaID;
	// ������� ����� �� �����
	cout << " \n ������� ���������� ����� ��� ������ - ";
	// ���������� ������ ����������
	cin >> pizzaAmount;
	// ������� ����� �� ����
	cout << "\n �������� �������: " << endl;
	cout << " 1-> ����������� ����: " << drinkPrice1 << "$" << endl;
	cout << " 2-> Coca-Cola:        " << drinkPrice2 << "$" << endl;
	cout << " 3-> ������������ ���: " << drinkPrice3 << "$" << endl;
	cout << "\n �������� ������� - ";
	// ���������� ������� �������
	cin >> drinkID;
	// ������� ����� �� �����
	cout << "\n ������� ���������� ������������� ������� - ";
	// ���������� ������ ���������� �������
	cin >> drinkAmount;
	switch (pizzaID)
	{
	case 1:
		selPizPrice = pizzaPrice1;
		break;
	case 2:
		selPizPrice = pizzaPrice2;
		break;
	case 3:
		selPizPrice = pizzaPrice3;
		break;
	case 4:
		selPizPrice = pizzaPrice4;
		break;
	default:
		cout << "\n ��������, ��������� ����� ��� � ����!" << endl;
		selPizPrice = 0;
		break;
	}
	switch (drinkID)
	{
	case 1:
		selDrPrice = drinkPrice1;
		break;
	case 2:
		selDrPrice = drinkPrice2;
		break;
	case 3:
		selDrPrice = drinkPrice3;
		break;
	default:
		cout << "\n ��������, ������� ������� ��� � ����!" << endl;
		selDrPrice = 0;
		break;
	}
	temp = pizzaAmount;
	if (pizzaAmount >= 5)
	{
		cout << "\n �����! ������ ����� �������� ����� � �������!" << endl;
		pizzaAmount = pizzaAmount - pizzaAmount / 5;
	}
	sumOrder = sumOrder + pizzaAmount * selPizPrice;
	if ((drinkAmount >= 3) && (selDrPrice > 2))
	{
		cout << "\n ���� ������ �� ������� 15% " << endl;
		sumOrder = sumOrder + drinkAmount * selDrPrice * (1 - 0.15);
	}
	else
	{
		sumOrder = sumOrder + drinkAmount + selDrPrice;
	}
	if (sumOrder > 50)
	{
		cout << "\n ���� ������ 20% �� ���� �����. " << endl;
		sumOrder = sumOrder * (1 - 0.2);
	}
	cout << "\n ��� �����: " << endl;
	cout << " ����� -" << pizzaID << " - ����������(��)" << temp << "��������� ";
	cout << selPizPrice <<"$" << endl;;
	cout << " ������� -" << drinkID << "-";
	cout << drinkAmount << "$" << selDrPrice << endl;
	cout << " ����� � ������: " << sumOrder << "$" << endl;
	cout << " ��������� �������� ";
	return 0;
}