#include <iostream>
#include <windows.h>
#include <iomanip>
#include<string>
#include <time.h>  

using namespace std;


char board[10] = { '0','1','2','3','4','5','6','7','8','9' };

void display(void);      
int validate(int);       
void mark(int, int);   
int checkWin(int);      
int checkDraw(void);     
void changeSign(int&);  
int toss(string, string); 

int main()
{
	setlocale(LC_ALL, "rus");
	system("Color F0");
	cout << endl << endl;
	cout << setw(30);
		cout<< " Крестики-нолики." << endl;
	int choice, w = 1, turn;
	string player1, player2;
	char p1 = 'X', p2 = 'O';
	cout << "\n Введите имя первого игрока : ";
	getline(cin, player1);
	cout << " Введите имя второго игрока : ";
	getline(cin, player2);

	turn = toss(player1, player2);

	while (w)
	{
		display();

		if (turn == 1) cout <<" " << player1 << " Играет (X): ";
		else cout<<" " << player2 << " играет (O): ";
		cout << " Выберете квадрат : ";
		cin >> choice;

		if (validate(choice) == 1)
		{
			mark(turn, choice);

			if (checkWin(turn) == 1)
			{
				display();
				if (turn == 1) cout << player1 << " (X) Победил!!!"<<endl;
				else cout << player2 << " (O) Победил!!!"<<endl;
				w = 0;
			}

			if (checkDraw() == 1)
			{
				display();
				cout << " Ничья!"<<endl;
				w = 0;
			}

			changeSign(turn);
		}
		else cout << " Неправильный выбор..."<<endl;
	}
	return 0;
}

void display()
{
	cout << endl;
	cout << "\t---------"<<endl;
	cout << "\t| " << board[1] << " " << board[2] << " " << board[3] << " |"<<endl;
	cout << "\t| " << board[4] << " " << board[5] << " " << board[6] << " |"<<endl;
	cout << "\t| " << board[7] << " " << board[8] << " " << board[9] << " |"<<endl;
	cout << "\t---------"<<endl;
	cout << endl;
}

int validate(int choice)
{
	switch (choice)
	{
	case 1: if (board[1] == 'X' || board[1] == 'O') return 0; break;
	case 2: if (board[2] == 'X' || board[2] == 'O') return 0; break;
	case 3: if (board[3] == 'X' || board[3] == 'O') return 0; break;
	case 4: if (board[4] == 'X' || board[4] == 'O') return 0; break;
	case 5: if (board[5] == 'X' || board[5] == 'O') return 0; break;
	case 6: if (board[6] == 'X' || board[6] == 'O') return 0; break;
	case 7: if (board[7] == 'X' || board[7] == 'O') return 0; break;
	case 8: if (board[8] == 'X' || board[8] == 'O') return 0; break;
	case 9: if (board[9] == 'X' || board[9] == 'O') return 0; break;
	default: return -1;
	}
	system("cls");
	return 1;
}

void mark(int turn, int choice)
{
	if (turn == 1) board[choice] = 'X';
	else board[choice] = 'O';
}

int checkWin(int turn)
{
	char symb;
	if (turn == 1) symb = 'X';
	else symb = 'O';

	if (board[1] == symb && board[2] == symb && board[3] == symb)
		return 1;
	if (board[4] == symb && board[5] == symb && board[6] == symb)
		return 1;
	if (board[7] == symb && board[8] == symb && board[9] == symb)
		return 1;
	if (board[1] == symb && board[5] == symb && board[9] == symb)
		return 1;
	if (board[3] == symb && board[5] == symb && board[7] == symb)
		return 1;
	if (board[1] == symb && board[4] == symb && board[7] == symb)
		return 1;
	if (board[2] == symb && board[5] == symb && board[8] == symb)
		return 1;
	if (board[3] == symb && board[6] == symb && board[9] == symb)
		return 1;

	return 0;
}

int checkDraw()
{
	for (int i = 1; i < 10; i++)
		if (board[i] != 'X' && board[i] != 'O') return 0;
	return 1;
}

void changeSign(int& t)
{
	if (t == 1) t = 2;
	else t = 1;
}

int toss(string p1, string p2)
{
	cout << "\n Разыгрываем......" << endl;

	srand(time(0)); 
	int lower = 1, num;
	num = (rand() % 2) + lower;  
	if (num == 1)
	{
		cout << "\n Результат розыгрыша: " << p1 << " выиграл ...." << endl;
		return(1);
	}
	else
	{
		cout << "\n Результат розыгрыша:: " << p2 << "  выиграл...." << endl;
		return(2);
	}
}