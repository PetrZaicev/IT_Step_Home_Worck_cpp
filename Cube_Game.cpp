/*���� �������. ������������ � ��������� ��
������� ������� 2 ������. ���������� � ���, � ���� �� ����������� ���� ������� ����� ������.
������������� ��������
��������� ����.*/
#include <iostream>
#include <windows.h>
#include<time.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n ���� �������. ������������ � ��������� �� ������� ������� 2 ������." << endl;
	cout << " ���������� � ���, � ���� �� ����������� ���� ������� ����� ������." << endl;

	// ��������� ����������
	
	int userChoice;
	int Dice1, Dice2;
	int PlayerPoints, BotPoints;
	srand(time(NULL));
	PlayerPoints = 0;
	BotPoints = 0;
	do {
		cout << "\n  ����� ���������� � ����!"<<endl;
		cout << "\n  �������� ��� �����:"<<endl;
		cout << " 1 - ������� ������."<<endl;
		cout << " 2 - ����� �� ����."<<endl;
		cout << " ������� ����� - ";
		cin >> userChoice;
		switch (userChoice) {
		case 1:
		{
			do
			{
				cout << " ���������� ������� ����" << endl;
				cout << " ����� ������� �����... " << endl;
				Sleep(1000);
				Dice1 = 1 + rand() % 5;
				cout << " ��������� ������ " << Dice1 << "\n";
				switch (Dice1) {
				case 1:
				{
					cout << "\t============" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|     *    |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				case 2:
				{
					cout << "\t============" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t|     *     |" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t|     *     |" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				case 3:
				{
					cout << "\t============" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t|  *        |" << "\n";
					cout << "\t|     *     |" << "\n";
					cout << "\t|        *  |" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				case 4:
				{
					cout << "\t============" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|  *    *  |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|  *    *  | " << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t===========" << "\n";
					break;
				}
				case 5:
				{
					cout << "\t============" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|  *    *  |" << "\n";
					cout << "\t|    *     |" << "\n";
					cout << "\t|  *    *  |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				case 6:
				{
					cout << "\t============" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t|  *     *  |" << "\n";
					cout << "\t|  *     *  |" << "\n";
					cout << "\t|  *     *  |" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				}
				cout << " ��������� ������� ����� ..." << endl;
				Sleep(1000);
				Dice2 = 1 + rand() % 5;
				cout << " ��������� ���������� " << Dice2 << "\n";
				switch (Dice2) {
				case 1:
				{
					cout << "\t============" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|     *    |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				case 2:
				{
					cout << "\t============" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t|     *     |" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t|     *     |" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				case 3:
				{cout <<"\t============" << "\n";
				cout << "\t|           |" << "\n";
				cout << "\t|  *        |" << "\n";
				cout << "\t|     *     |" << "\n";
				cout << "\t|        *  |" << "\n";
				cout << "\t|           |" << "\n";
				cout << "\t============" << "\n";
					break;
				}
				case 4:
				{
					cout << "\t============" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|  *    *  |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|  *    *  | " << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t===========" << "\n";
					break;
				}
				case 5:
				{
					cout << "\t============" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t|  *    *  |" << "\n";
					cout << "\t|    *     |" << "\n";
					cout << "\t|  *    *  |" << "\n";
					cout << "\t|          |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				case 6:
				{

					cout << "\t============" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t|  *     *  |" << "\n";
					cout << "\t|  *     *  |" << "\n";
					cout << "\t|  *     *  |" << "\n";
					cout << "\t|           |" << "\n";
					cout << "\t============" << "\n";
					break;
				}
				}
				if (Dice1 == Dice2)
				{
					cout << " ��� ���" << endl;
				}
 } while (Dice1 == Dice2);
 if (Dice1 > Dice2)
 {
	 cout << "����� ����� ������.  ��������� ����� ������.\n\n";
	 for (int i = 0; i < 3; i++)
	 {
		 cout << " ����� ���������� - " << i + 1<<endl;
		 do
		 {
			 cout << " ������� �1�, ����� ��������� ����� "<<endl;
			 cin >> userChoice;
		 } while (userChoice != 1);
		 cout << " ����� ������� �����... " << endl;
		 Sleep(1000);
		 Dice1 = 1 + rand() % 5;
		 Dice2 = 1 + rand() % 5;
		 PlayerPoints = PlayerPoints +
			 Dice1 + Dice2;
		 cout << " ��������� ������ "<< Dice1 << "-" << Dice2 <<endl;
		 switch (Dice1) {
		 case 1:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|     *    |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 2:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 3:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|  *        |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|        *  |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 4:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  | " << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t===========" << "\n";
			 break;
		 }
		 case 5:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|    *     |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 6:
		 {

			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 }
		 switch (Dice2) {
		 case 1:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|     *    |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 2:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 3:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|  *        |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|        *  |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 4:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  | " << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t===========" << "\n";
			 break;
		 }
		 case 5:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|    *     |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 6:
		 {

			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 }
		 cout << " ��������� ������� ����� "<<endl;
		 Sleep(1000);
		 Dice1 = 1 + rand() % 5;
		 Dice2 = 1 + rand() % 5;
		 BotPoints = BotPoints + Dice1 +
			 Dice2;
		 cout << " ��������� ���������� "<< Dice1 << "-" << Dice2<<endl;
		 switch (Dice1) {
		 case 1:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|     *    |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 2:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
		 }
		 case 3:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|  *        |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|        *  |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 4:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  | " << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t===========" << "\n";
			 break;
		 }
		 case 5:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|    *     |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 6:
		 {

			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 }
		 switch (Dice2) {
		 case 1:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|     *    |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t============" << "\n";
		 }
		 case 2:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 3:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|  *        |" << "\n";
			 cout << "\t|     *     |" << "\n";
			 cout << "\t|        *  |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 4:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  | " << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t===========" << "\n";
			 break;
		 }
		 case 5:
		 {
			 cout << "\t============" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|    *     |" << "\n";
			 cout << "\t|  *    *  |" << "\n";
			 cout << "\t|          |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 case 6:
		 {

			 cout << "\t============" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|  *     *  |" << "\n";
			 cout << "\t|           |" << "\n";
			 cout << "\t============" << "\n";
			 break;
		 }
		 }
		 cout  << " ���������� ������ - " << i + 1 << endl;
		 cout << " ���� ������ - "<< PlayerPoints <<endl;
		 cout << " ���� ���������� - " << BotPoints << "\n"<<endl;
		 Sleep(1000);
 }
 }
 else
 {
 cout << " ��������� ����� ������. ����� ����� ������.\n"<<endl;
 for (int i = 0; i < 3; i++)
 {
	 cout << " ������ ������:" << i + 1 <<endl;
	 cout << " ��������� ������ ������..."<<endl;
	 Sleep(1000);
	 Dice1 = 1 + rand() % 5;
	 Dice2 = 1 + rand() % 5;
	 BotPoints = BotPoints + Dice1 +Dice2;
	 cout << " ��������� ���������� - "<< Dice1 << "-" << Dice2<<endl;
	 switch (Dice1) {
	 case 1:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|     *    |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 2:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 3:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|  *        |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|        *  |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 4:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  | " << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t===========" << "\n";
		 break;
	 }
	 case 5:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|    *     |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 6:
	 {

		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 }
	 switch (Dice2) {
	 case 1:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|     *    |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 2:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 3:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|  *        |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|        *  |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 4:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  | " << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t===========" << "\n";
		 break;
	 }
	 case 5:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|    *     |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 6:
	 {

		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 }
	 do
	 {
		 cout << " ������� �1� ��� �� ������� ������ - ";
		 cin >> userChoice;
	 } while (userChoice != 1);
	 cout << " ����� ������� ������.";
	 Sleep(1000);
	 Dice1 = 1 + rand() % 5;
	 Dice2 = 1 + rand() % 5;
	 PlayerPoints = PlayerPoints +
		 Dice1 + Dice2;
	 cout << " ��������� ������ - "<< Dice1 << "-" << Dice2<<endl;
	 switch (Dice1) {
	 case 1:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|     *    |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 2:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 3:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|  *        |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|        *  |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 4:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  | " << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t===========" << "\n";
		 break;
	 }
	 case 5:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|    *     |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 6:
	 {

		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 }
	 switch (Dice2) {
	 case 1:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|     *    |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 2:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 3:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|  *        |" << "\n";
		 cout << "\t|     *     |" << "\n";
		 cout << "\t|        *  |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 4:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  | " << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t===========" << "\n";
		 break;
	 }
	 case 5:
	 {
		 cout << "\t============" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|    *     |" << "\n";
		 cout << "\t|  *    *  |" << "\n";
		 cout << "\t|          |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 case 6:
	 {

		 cout << "\t============" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|  *     *  |" << "\n";
		 cout << "\t|           |" << "\n";
		 cout << "\t============" << "\n";
		 break;
	 }
	 }
	 cout << "- ���������� ������ - " << i + 1 <<endl;
	 cout << " ���� ���������� - " << BotPoints <<endl;
	 cout << " ���� ������ - " << PlayerPoints <<endl;
	 Sleep(1000);
 }
 }
 cout << " ��������� ����:" <<endl;
 cout << " ��������� ������ - "<< PlayerPoints <<endl;
 cout << " ��������� ���������� - " << BotPoints << "\n"<<endl;
 if (PlayerPoints > BotPoints)
 {
	 cout << " ����� ��������! " <<endl;
 }
 else if (PlayerPoints < BotPoints)
 {
	 cout << " ��������� �������!" <<endl;
 }
 else
 {
	 cout << " �����!"<<endl;
 }
 break;
 }
 case 2:
 {
	 cout << "�� ��������!"<<endl;
	 break;
 }
 default:
	 cout << " ������ ������ ��� � ����!"<<endl;
 }
 } while (userChoice != 2);
 return 0;
}