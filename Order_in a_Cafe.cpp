/*����������� ��������� ������� ������ � ���������
��� �������, ��� ����� ����� ���� �� ��������� ������� �
������ ������ ��������� ���� ����� ������. ����������
�������� � ������������ �� ������� ������� �����. �����
������� �������� ���������� ���� (�������� ��������,
������������ ������� � �� ����) � �� ��������. ���������-
���� ����������� ������ ���������� ��������� ���� ���
�������, ���� �� ������ �������� ��� ���-�� � ���� �����.
��������� ������ ��������� � �������� ����� ������
������ ���� ��������.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n �������� ������� ������ � ���������" << endl;

	//��������� ����������
	int howPeople = 0, UserChoice = 0;
	float drink1 = 1.50, drink2 = 1.80, drink3 = 2.10, desert1 = 2.20, desert2 = 2.40, desert3 = 2.50,
		sum = 0, nDrink1, nDrink2, nDrink3, nDesert1, nDesert2, nDesert3;

	cout << "\n ������������, ������� ������� ����� ������ �����? - ";
	cin >> howPeople;

	for (int i = 1; i <= howPeople; i++)
	{
		for (int a = 0; a < 7; a++) {
			cout << "\n\t �������� ����� ��� " << i << " ��������." << endl;
			cout << "\n\t 1 - ���� ��������  - " << drink1 << " $." << endl;
			cout << "\t 2 - ���� �����     - " << drink2 << " $." << endl;
			cout << "\t 3 - ���� ��������� - " << drink3 << " $." << endl;
			cout << "\t 4 - �������        - " << desert1 << " $." << endl;
			cout << "\t 5 - ��������       - " << desert2 << " $." << endl;
			cout << "\t 6 - ���������      - " << desert3 << " $." << endl;
			cout << "\t 7 - �������,���.   " << endl;
			cout << "\n\t ��������, ��� ������ ���������� - ";
			cin >> UserChoice;
			switch (UserChoice) {
			case 1:
				cout << " ������� ������ �������� ����� ��������? - ";
				cin >> nDrink1;
				sum = sum + drink1 * nDrink1;
				break;
			case 2:
				cout << "\n ������� ������ �������� ����� �����? - ";
				cin >> nDrink2;
				sum = sum + drink2 * nDrink2;
				break;
			case 3:
				cout << "\n ������� ������ �������� ����� ���������? - ";
				cin >> nDrink3;
				sum = sum + drink3 * nDrink3;
				break;
			case 4:
				cout << "\n ������� ��������� �� ������ ��������? - ";
				cin >> nDesert1;
				sum = sum + desert1 * nDesert1;
				break;
			case 5:
				cout << "\n ������� ��������� �� ������ ��������? - ";
				cin >> nDesert2;
				sum = sum + desert2 * nDesert2;
				break;
			case 6:
				cout << "\n ������� ���������� �� ������ ��������? - ";
				cin >> nDesert2;
				sum = sum + desert2 * nDesert2;
				break;
			case 7:
				break;
			default:
				cout << "\n ������ ��� � �����!";
				break;
			}
			if (UserChoice == 7)
				break;
		}
	}
	cout << "\n ����� ����� ������ = " << sum << " -$." << endl;
	cout << "\n ��������� ��������!" << endl << endl;
	return 0;

}
