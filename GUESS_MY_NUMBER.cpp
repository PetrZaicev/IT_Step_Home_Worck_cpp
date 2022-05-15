/*Написать игру «GUESS MY NUMBER». Пользователь
угадывает число, которое «загадал» компьютер. Возможны
2 уровня сложности: на первом уровне число от 1 до 10, на
втором от 10 до 100. В начале игры пользователь выбирает
уровень.*/

#include <iostream>
#include <windows.h>
#include"time.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// Лбъявляем пременные
	int level,          // Номер уровня игры
		a,              // Нижняя граница загадываемого числа
		b,              // Верхняя граница загадываемого числа
		magicNum,       // Загаданное число
		userNum,        // Число которе ввел пользыватель
		userChoice,      // Выбор пользывателя
		userLives,      // Количество жизней пользывателя
		userPoints,     // Очки пользывателя
		guessed;        //признак было ли угадано число (состояние процесса угадывания).
	userPoints = 0;
	guessed = 0;
	srand(time(NULL));  /*Для того, чтобы при каждом новом запуске программы
                         генерировалось новое число используем функцию srand(), а в
                         качестве ее параметра — вызов функции time(NULL).*/

	cout << "\n  Игра «GUESS MY NUMBER». Пользователь" << endl;
	cout << " угадывает число, которое «загадал» компьютер. Возможны" << endl;
	cout << " 2 уровня сложности: на первом уровне число от 1 до 10, на" << endl;
	cout << " втором от 10 до 100. В начале игры пользователь выбирает" << endl;
	cout << " уровень" << endl;

	do {
		cout << "\n  Добро пожаловать в Игру!"<<endl;
		cout << " Вы можете выбрать:"<<endl;
		cout << " 1 - Уровень <1> игры: Magic Number [1..10]"<<endl;
		cout << " 2 - Уровень <2> : Magic Number [10..100]"<<endl;
		cout << " 3 - Выход"<<endl;
		cout << " Сделайте Ваш выбор - ";
		cin >> userChoice;
		switch (userChoice) {
		case 1:
		{
			cout << "\n Добро пожаловать на <1> уровень: Magic Number [1..10]!"<<endl;
			a = 1;
			b = 10;
			userLives = (b - a + 1) / 2;
			cout << " Компьютер придумывает число..."<<endl;
			Sleep(1000);
			magicNum = a + rand() % (b - a);
			cout << " Магическое число готово! Попробуем угадать?"<<endl;
			do {
				cout << "\n У Вас есть "<< userLives<<" жизнней." << endl;
				cout << " Попробуйте угадать! Ваше число? - ";
				cin >> userNum;
				if (userNum == magicNum)
				{
					cout << " Вы угадали магическое число!"<<endl;
					guessed = 1;
				}
				else {
					cout << " Ой! Вы потеряли 1 жизнь!"<<endl;
					userLives--;
					cout << " У Вас осталось - "<< userLives<<" жизней!" << endl;
					do {
						cout << "\n Хочешь небольшой намек? Это стоит 1 жизнь!" << endl;
						cout << " Ваш выбор:"<<endl;
						cout << " 1 - Да"<<endl;
						cout << " 0 - Нет"<<endl;
						cout << " Сделайте выбор - ";
						cin >> userChoice;
						if (userChoice == 1)
						{
							if (userNum > magicNum)
							{
								cout << "\n Magic Nunber меньше... "<<endl;
								userLives--;
							}
							else
							{
								cout << "\n Magic Nunber больше... "<<endl;
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
				cout << " Вы проиграли!"<<endl;
			}
			else
			{
				cout << " Ваши очки:" << userPoints << endl;
			}
			break;
		}
		case 2:
		{
			cout << "\n Добро пожаловать на <2> уровень: Magic Number:[10..100]!"<<endl;
			a = 10;
			b = 100;
			userLives = (b - a + 1) / 4;
			cout << " Компьютер придумывает число..."<<endl;
			Sleep(1000);
			magicNum = a + rand() % (b - a);
			cout << " Магическое число готово!  Попробуем угадать? " << endl;
			do {
				cout << "\n У Вас есть - "<< userLives <<" жизней." << endl;
				cout << " Попробуйте угадать! Ваше число? - ";
				cin >> userNum;
				if (userNum == magicNum)
				{
					cout << " Вы угадали магическое число!\n";
					guessed = 1;
				}
				else {
					cout << " Ой! Вы потеряли 1 жизнь!!"<<endl;
					userLives--;
					cout << " У Вас осталось "<< userLives<<" жизней" << endl;
					do {
						cout << "\n Хочешь небольшой намек? Это стоит 1 жизнь! "<<endl;
						cout << " Ваш выбор:"<<endl;
						cout << " 1 - Да"<<endl;
						cout << " 0 - Нет"<<endl;
						cout << " сделайте выбор - ";
						cin >> userChoice;
						if (userChoice == 1)
						{
							if (userNum > magicNum)
							{
								cout << " Magic Nunber меньше..."<<endl;
								userLives--;
							}
							else
							{
								cout << " Magic Nunber больше..."<<endl;
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
				cout << " Вы проиграли!"<<endl;
			}
			else
			{
				cout << " Ваши очки:" << userPoints << endl;
			}
			break;
		}
		case 3:
		{
			cout << " До встречи!";
			break;
		}
		default:
			cout << " Неверный пункт меню!"<<endl;
 }
 } while (userChoice != 3);
 return 0;
}

