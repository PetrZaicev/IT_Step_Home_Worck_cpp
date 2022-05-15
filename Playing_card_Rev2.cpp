#include<iostream>
#include<iomanip> //��� ������� setw() � setfill()
using namespace std;

void showCard(int _suit, int _num)
{
	int filler = 6;                               // ���������� ��������� � ������� setw()
	char upLeftCorner = 218, upRightCorner = 191, horizontalLine = 196, vertivalLine = 179, downLeftCorner = 192, downRightCorner = 217; //������� ������� �����
	char  charCard[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };               //����� ����
	_suit += 2;                                //������������� ���� ASCII ������� ����� �����

	system("cls");
	cout << upLeftCorner << setfill(horizontalLine) << setw(8) << upRightCorner << endl;             //������� �����
	if (_num == 10)                               // ����� �������
	{
		filler--;                               // �������� ��������������
		cout << vertivalLine << "1" << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << vertivalLine << endl;   //��������� �������� "1"
	}
	else
		cout << vertivalLine << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << vertivalLine << endl;      //���� ����� �� ������� �������� �� ����� � ������
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	if (_num == 10)                               
		cout << vertivalLine << setfill(' ') << setw(filler) << "1" << charCard[_num - 1] << (char)_suit << vertivalLine << endl;
	else
		cout << vertivalLine << setfill(' ') << setw(filler) << charCard[_num - 1] << (char)_suit << vertivalLine << endl;
	cout << downLeftCorner << setfill(horizontalLine) << setw(8) << downRightCorner << endl;            //������ �����

}

int main()
{
	//�������� �������, ��������� �� ����� ���������� �� ��������� �����. 

	int suit, num;                            
	while (1)                               
	{
		system("cls");
		cout << "Please enter suit\n1 - Hearts\n2 - Diamonds\n3 - Clubs\n4 - Spades" << endl;
		cin >> suit;                              
		if (suit < 1 || suit > 4)
		{
			cout << "ERROR: Incorrect suit\n";
			system("pause");
			exit(1);
		}
		system("cls");
		cout << "Enter card\n1 - Ace \n2 - Two\n3 - Three\n4 - Four\n5 - Five\n6 - Six\n7 - Seven\n8 - Eight\n9 - Nine\n10 - Ten\n11 - Jacket\n12 - Quin\n13 - King" << endl;
		cin >> num;                               
		if (num < 1 || num > 13)
		{
			cout << "ERROR: Incorrect card\n";
			system("pause");
			exit(2);
		}
		showCard(suit, num);                          

		system("pause");                             //����� ����� �������� �����
	}
	return 0;
}