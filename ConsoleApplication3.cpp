#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

// Прототипы функций

void PrintMenu(int arr[], int size);
bool play(int menu_array[], int size, bool Selected);
bool solution_impossible(int size, int posI, int posJ);
void Tour(int arr[8][8], int size, int posI, int posJ, int step);
void print(int arr[8][8], int size);
bool ValidStep(int posI, int posJ, int size);

void main()
{
	const int menu_size = 5;
	bool Selected = false, solved = false;
	int menu_array[menu_size] = { 1,0,0,0,0 };
	int size = 5, posI = 0, posJ = 0;
	int arr[8][8] = {};
	int step = 1;

	srand(time(NULL));

	while (!Selected)
	{
		system("cls");
		cout << "Knight's tour" << endl;
		cout << "~~~~~~~~~~~~~" << endl;
		cout << "A knight's tour is a sequence of moves of a knight on a chessboard such that" << endl;
		cout << "the knight visits every square only once. If the knight ends on a square" << endl;
		cout << "that is one knight's move from the beginning square (so that it could tour " << endl;
		cout << "the board again immediately, following the same path), the tour is closed, " << endl;
		cout << "otherwise it is open." << endl << endl;

		cout << "Select size of the chessboard:" << endl << endl;

		PrintMenu(menu_array, menu_size);

		cout << "[ENTER]:Select" << endl;
		cout << "[  " << (char)24 << "  ]:Up" << endl;
		cout << "[  " << (char)25 << "  ]:Down" << endl;

		Selected = play(menu_array, menu_size, Selected);
	}

	cout << "Enter position i: ";
	cin >> posI;
	cout << "Enter position j: ";
	cin >> posJ;

	if (menu_array[0] == 1)
	{
		size = 5;

		/*posI = rand() % 5;
		posJ = rand() % 5;*/

		while (solution_impossible(size, posI, posJ))
		{
			cout << "Solution impossible. Re-enter positions. " << endl;
			cout << "Enter position i: ";
			cin >> posI;
			cout << "Enter position j: ";
			cin >> posJ;
			/*posI = rand() % 5;
			posJ = rand() % 5;*/
		}

	}
	else if (menu_array[1] == 1)
	{
		size = 6;
		/*posI = rand() % 6;
		posJ = rand() % 6;
		*/
	}
	else if (menu_array[2] == 1)
	{
		size = 7;
		/*posI = rand() % 7;
		posJ = rand() % 7;*/
		while (solution_impossible(size, posI, posJ))
		{
			cout << "Solution impossible. Re-enter positions. " << endl;
			cout << "Enter position i: ";
			cin >> posI;
			cout << "Enter position j: ";
			cin >> posJ;
			/*posI = rand() % 7;
			posJ = rand() % 7;*/
		}
	}
	else if (menu_array[3] == 1)
	{
		size = 8;
		/*posI = rand() % 8;
		posJ = rand() % 8;
		arr[posI][posJ] = step;*/
	}
	else
		exit(0);



	Tour(arr, size, posI, posJ, step);

	system("pause");
}

// ФУНКЦИИ

void PrintMenu(int arr[], int size)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << (char)201;
	for (int i = 0; i < 15; i++)
	{
		cout << (char)205;
	}
	cout << (char)187 << endl;

	cout << (char)186 << "    SIZES:     " << (char)186 << endl;
	cout << (char)186 << "    ~~~~~~     " << (char)186 << endl;

	for (int i = 0; i < size; i++)
	{
		cout << (char)186;

		if (arr[i] == 1)
		{

			SetConsoleTextAttribute(h, 3);
			cout << " " << (char)15 << " ";
			SetConsoleTextAttribute(h, 63);
			if (i == 0)
				cout << " 5 x 5 ";
			else if (i == 1)
				cout << " 6 x 6 ";
			else if (i == 2)
				cout << " 7 x 7 ";
			else if (i == 3)
				cout << " 8 x 8 ";
			else
				cout << " Exit  ";

			SetConsoleTextAttribute(h, 7);

		}
		else
			if (i == 0)
				cout << "   " << " 5 x 5 ";
			else if (i == 1)
				cout << "   " << " 6 x 6 ";
			else if (i == 2)
				cout << "   " << " 7 x 7 ";
			else if (i == 3)
				cout << "   " << " 8 x 8 ";
			else
				cout << "   " << " Exit  ";
		cout << "\t" << (char)186 << endl;
	}

	cout << (char)200;
	for (int i = 0; i < 15; i++)
	{
		cout << (char)205;
	}
	cout << (char)188 << endl << endl;

}

bool play(int menu_array[], int size, bool Selected)
{
	int key;
	key = _getch();

	if (key == 224)
	{
		key = _getch();
		if (key == 72)
		{
			// Вверх
			for (int i = 0; i < size; i++)
				if (menu_array[i] == 1 && i > 0)
				{
					menu_array[i] = 0;
					menu_array[i - 1] = 1;
					break;
				}
		}

		else if (key == 80)
		{
			//Вниз
			for (int i = 0; i < size; i++)
				if (menu_array[i] == 1 && i < size - 1)
				{
					menu_array[i] = 0;
					menu_array[i + 1] = 1;
					break;
				}
		}
	}
	else if (key == 13) // enter
	{
		Selected = true;
	}
	return Selected;
}

bool solution_impossible(int size, int posI, int posJ)
{
	// Если произведение сторон доски нечетно и сумма координат начальной позиции
	// нечетна, то решения не существует.
	return (((size * size) % 2 != 0) && ((posI + posJ) % 2 != 0));
}

void print(int arr[8][8], int size)
{
	system("cls");

	cout << " " << (char)201;
	for (int i = 0; i < 3 * size - 1; i++)
	{
		if ((i + 4) % 3 == 0)
			cout << (char)209;
		else
			cout << (char)205;
	}
	cout << (char)187 << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == 0)
			{
				cout << i + 1;
				cout << (char)186;
			}
			if (arr[i][j] < 10)
				cout << " ";
			cout << arr[i][j];
			if (j == size - 1)
				cout << (char)186;
			else
				cout << (char)179;
		}
		cout << endl;

		if (i < size - 1)

		{
			cout << " " << (char)199;
			for (int i = 0; i < 3 * size - 1; i++)
			{
				if ((i + 4) % 3 == 0)
					cout << (char)197;
				else
				{
					cout << (char)196;
				}
			}
			cout << (char)182 << endl;
		}
	}
	cout << " " << (char)200;
	for (int i = 0; i < 3 * size - 1; i++)
	{
		if ((i + 4) % 3 == 0)
			cout << (char)207;
		else
			cout << (char)205;
	}
	cout << (char)188 << endl;

	//--------------
	for (int i = 0; i < size; i++)
		cout << "  " << char(65 + i);

	cout << endl << endl;

}

bool ValidStep(int posI, int posJ, int size)
{ // Проверяем не выходят ли новые координаты за размер доски
	if (posI < 0 || posJ < 0 || posI >= size || posJ >= size)
		return false;
	else
		return true;
}

void Tour(int arr[8][8], int size, int posI, int posJ, int step)
{


	arr[posI][posJ] = step;

	if (step == size * size)
	{
		print(arr, size);
		return;
	}
	else
	{
		int row[] = { 2, 1, -1, -2, -2, -1,  1,  2 , 2 };
		int col[] = { 1, 2,  2,  1, -1, -2, -2, -1, 1 };

		int newI, newJ;

		for (int i = 0; i < 8; i++)
		{
			newI = posI + row[i];
			newJ = posJ + col[i];

			// проверяем не выходим ли за границы доски и свободна ли клетка
			if (ValidStep(newI, newJ, size) && !arr[newI][newJ])
				Tour(arr, size, newI, newJ, step + 1);
		}
		//обнулим клетку, если она тупиковая
		arr[posI][posJ] = 0;
	}
}

