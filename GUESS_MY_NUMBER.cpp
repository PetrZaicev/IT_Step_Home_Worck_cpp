/*�������� ���� �GUESS MY NUMBER�. ������������
��������� �����, ������� �������� ���������. ��������
2 ������ ���������: �� ������ ������ ����� �� 1 �� 10, ��
������ �� 10 �� 100. � ������ ���� ������������ ��������
�������.*/

#include <iostream>
#include <windows.h>
#include"time.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// ��������� ���������
	int level,          // ����� ������ ����
		a,              // ������ ������� ������������� �����
		b,              // ������� ������� ������������� �����
		magicNum,       // ���������� �����
		userNum,        // ����� ������ ���� ������������
		userChoice,      // ����� ������������
		userLives,      // ���������� ������ ������������
		userPoints,     // ���� ������������
		guessed;        //������� ���� �� ������� ����� (��������� �������� ����������).
	userPoints = 0;
	guessed = 0;
	srand(time(NULL));  /*��� ����, ����� ��� ������ ����� ������� ���������
                         �������������� ����� ����� ���������� ������� srand(), � �
                         �������� �� ��������� � ����� ������� time(NULL).*/

	cout << "\n  ���� �GUESS MY NUMBER�. ������������" << endl;
	cout << " ��������� �����, ������� �������� ���������. ��������" << endl;
	cout << " 2 ������ ���������: �� ������ ������ ����� �� 1 �� 10, ��" << endl;
	cout << " ������ �� 10 �� 100. � ������ ���� ������������ ��������" << endl;
	cout << " �������" << endl;

	do {
		cout << "\n  ����� ���������� � ����!"<<endl;
		cout << " �� ������ �������:"<<endl;
		cout << " 1 - ������� <1> ����: Magic Number [1..10]"<<endl;
		cout << " 2 - ������� <2> : Magic Number [10..100]"<<endl;
		cout << " 3 - �����"<<endl;
		cout << " �������� ��� ����� - ";
		cin >> userChoice;
		switch (userChoice) {
		case 1:
		{
			cout << "\n ����� ���������� �� <1> �������: Magic Number [1..10]!"<<endl;
			a = 1;
			b = 10;
			userLives = (b - a + 1) / 2;
			cout << " ��������� ����������� �����..."<<endl;
			Sleep(1000);
			magicNum = a + rand() % (b - a);
			cout << " ���������� ����� ������! ��������� �������?"<<endl;
			do {
				cout << "\n � ��� ���� "<< userLives<<" �������." << endl;
				cout << " ���������� �������! ���� �����? - ";
				cin >> userNum;
				if (userNum == magicNum)
				{
					cout << " �� ������� ���������� �����!"<<endl;
					guessed = 1;
				}
				else {
					cout << " ��! �� �������� 1 �����!"<<endl;
					userLives--;
					cout << " � ��� �������� - "<< userLives<<" ������!" << endl;
					do {
						cout << "\n ������ ��������� �����? ��� ����� 1 �����!" << endl;
						cout << " ��� �����:"<<endl;
						cout << " 1 - ��"<<endl;
						cout << " 0 - ���"<<endl;
						cout << " �������� ����� - ";
						cin >> userChoice;
						if (userChoice == 1)
						{
							if (userNum > magicNum)
							{
								cout << "\n Magic Nunber ������... "<<endl;
								userLives--;
							}
							else
							{
								cout << "\n Magic Nunber ������... "<<endl;
								userLives--;
							}
						}
					} while ((userChoice != 1) &&
						(userChoice != 0));
				}
			} while ((userLives > 0) && (guessed == 0));
			userPoints = userLives * 5;
			if (userPoints == 0)
			{
				cout << " �� ���������!"<<endl;
			}
			else
			{
				cout << " ���� ����:" << userPoints << endl;
			}
			break;
		}
		case 2:
		{
			cout << "\n ����� ���������� �� <2> �������: Magic Number:[10..100]!"<<endl;
			a = 10;
			b = 100;
			userLives = (b - a + 1) / 4;
			cout << " ��������� ����������� �����..."<<endl;
			Sleep(1000);
			magicNum = a + rand() % (b - a);
			cout << " ���������� ����� ������!  ��������� �������? " << endl;
			do {
				cout << "\n � ��� ���� - "<< userLives <<" ������." << endl;
				cout << " ���������� �������! ���� �����? - ";
				cin >> userNum;
				if (userNum == magicNum)
				{
					cout << " �� ������� ���������� �����!\n";
					guessed = 1;
				}
				else {
					cout << " ��! �� �������� 1 �����!!"<<endl;
					userLives--;
					cout << " � ��� �������� "<< userLives<<" ������" << endl;
					do {
						cout << "\n ������ ��������� �����? ��� ����� 1 �����! "<<endl;
						cout << " ��� �����:"<<endl;
						cout << " 1 - ��"<<endl;
						cout << " 0 - ���"<<endl;
						cout << " �������� ����� - ";
						cin >> userChoice;
						if (userChoice == 1)
						{
							if (userNum > magicNum)
							{
								cout << " Magic Nunber ������..."<<endl;
								userLives--;
							}
							else
							{
								cout << " Magic Nunber ������..."<<endl;
								userLives--;
							}
						}
					} while ((userChoice != 1) &&
						(userChoice != 0));
				}
			} while ((userLives > 0) && (guessed == 0));
			userPoints = userLives * 10;
			if (userPoints == 0)
			{
				cout << " �� ���������!"<<endl;
			}
			else
			{
				cout << " ���� ����:" << userPoints << endl;
			}
			break;
		}
		case 3:
		{
			cout << " �� �������!";
			break;
		}
		default:
			cout << " �������� ����� ����!"<<endl;
 }
 } while (userChoice != 3);
 return 0;
}

