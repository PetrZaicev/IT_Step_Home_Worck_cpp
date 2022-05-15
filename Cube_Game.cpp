/*Игра «Кубики». Пользователь и компьютер по
очереди бросают 2 кубика. Победитель — тот, у кого по результатам трех бросков сумма больше.
Предусмотреть красивый
интерфейс игры.*/
#include <iostream>
#include <windows.h>
#include<time.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n Игра «Кубики». Пользователь и компьютер по очереди бросают 2 кубика." << endl;
	cout << " Победитель — тот, у кого по результатам трех бросков сумма больше." << endl;

	// Объявляем переменные
	
	int userChoice;
	int Dice1, Dice2;
	int PlayerPoints, BotPoints;
	srand(time(NULL));
	PlayerPoints = 0;
	BotPoints = 0;
	do {
		cout << "\n  Добро пожаловать в игру!"<<endl;
		cout << "\n  Сделайте Ваш выбор:"<<endl;
		cout << " 1 - Бросить кубики."<<endl;
		cout << " 2 - Выйти из игры."<<endl;
		cout << " Введите число - ";
		cin >> userChoice;
		switch (userChoice) {
		case 1:
		{
			do
			{
				cout << " Определите порядок игры" << endl;
				cout << " Игрок бросает кости... " << endl;
				Sleep(1000);
				Dice1 = 1 + rand() % 5;
				cout << " Результат игрока " << Dice1 << "\n";
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
				cout << " Компьютер бросает кости ..." << endl;
				Sleep(1000);
				Dice2 = 1 + rand() % 5;
				cout << " Результат компьютера " << Dice2 << "\n";
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
					cout << " Ещё раз" << endl;
				}
 } while (Dice1 == Dice2);
 if (Dice1 > Dice2)
 {
	 cout << "Игрок ходит первым.  Компьютер ходит вторым.\n\n";
	 for (int i = 0; i < 3; i++)
	 {
		 cout << " Раунд начинается - " << i + 1<<endl;
		 do
		 {
			 cout << " Введите «1», чтобы разыграть кости "<<endl;
			 cin >> userChoice;
		 } while (userChoice != 1);
		 cout << " Игрок бросает кости... " << endl;
		 Sleep(1000);
		 Dice1 = 1 + rand() % 5;
		 Dice2 = 1 + rand() % 5;
		 PlayerPoints = PlayerPoints +
			 Dice1 + Dice2;
		 cout << " Результат игрока "<< Dice1 << "-" << Dice2 <<endl;
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
		 cout << " Компьютер бросает кости "<<endl;
		 Sleep(1000);
		 Dice1 = 1 + rand() % 5;
		 Dice2 = 1 + rand() % 5;
		 BotPoints = BotPoints + Dice1 +
			 Dice2;
		 cout << " Результат компьютера "<< Dice1 << "-" << Dice2<<endl;
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
		 cout  << " Результаты раунда - " << i + 1 << endl;
		 cout << " Очки игрока - "<< PlayerPoints <<endl;
		 cout << " Очки компьютера - " << BotPoints << "\n"<<endl;
		 Sleep(1000);
 }
 }
 else
 {
 cout << " Компьютер ходит первым. Игрок ходит вторым.\n"<<endl;
 for (int i = 0; i < 3; i++)
 {
	 cout << " Начало раунда:" << i + 1 <<endl;
	 cout << " Компьютер кидает кубики..."<<endl;
	 Sleep(1000);
	 Dice1 = 1 + rand() % 5;
	 Dice2 = 1 + rand() % 5;
	 BotPoints = BotPoints + Dice1 +Dice2;
	 cout << " Результат компьютера - "<< Dice1 << "-" << Dice2<<endl;
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
		 cout << " Введите «1» что бы бросить кубики - ";
		 cin >> userChoice;
	 } while (userChoice != 1);
	 cout << " Игрок бросает кубики.";
	 Sleep(1000);
	 Dice1 = 1 + rand() % 5;
	 Dice2 = 1 + rand() % 5;
	 PlayerPoints = PlayerPoints +
		 Dice1 + Dice2;
	 cout << " Результат игрока - "<< Dice1 << "-" << Dice2<<endl;
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
	 cout << "- Результаты раунда - " << i + 1 <<endl;
	 cout << " Очки компьютера - " << BotPoints <<endl;
	 cout << " Очки инрока - " << PlayerPoints <<endl;
	 Sleep(1000);
 }
 }
 cout << " Результат игры:" <<endl;
 cout << " Результат игрока - "<< PlayerPoints <<endl;
 cout << " Результат компьютера - " << BotPoints << "\n"<<endl;
 if (PlayerPoints > BotPoints)
 {
	 cout << " Игрок ВЫИГРОАЛ! " <<endl;
 }
 else if (PlayerPoints < BotPoints)
 {
	 cout << " Компьютер ВЫИГРАЛ!" <<endl;
 }
 else
 {
	 cout << " Ничья!"<<endl;
 }
 break;
 }
 case 2:
 {
	 cout << "До Свидания!"<<endl;
	 break;
 }
 default:
	 cout << " Такого пункта нет в меню!"<<endl;
 }
 } while (userChoice != 2);
 return 0;
}