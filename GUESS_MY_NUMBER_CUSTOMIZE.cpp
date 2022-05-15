/*Модифицировать игру «GUESS MY NUMBER» следующим
образом:
■ пользователь не выбирает уровень, т. к. переход ко второму
уровню возможен только после завершения первого без
проигрыша (если игрок желает продолжать);
■ первый уровень длится три раунда (на каждом раунде
загадывается новое число), а второй — два раунда. Новые
жизни начисляются игроку перед новым раундом.
■ если пользователь проиграл раунд, то компьютеру начисляются очки за раунд в размере начальные жизни*/

#include <iostream>
#include <windows.h>
#include"time.h"
using namespace std;

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\n               Модифицированая игра «GUESS MY NUMBER»." << endl;
	cout << "  *  пользователь не выбирает уровень, т.к.переход ко второму" << endl;
	cout << "	    уровню возможен только после завершения первого без" << endl;
	cout << "               проигрыша(если игрок желает продолжать);" << endl;
	cout << "  *       первый уровень длится три раунда(на каждом раунде" << endl;
	cout << "        загадывается новое число), а второй — два раунда.Новые" << endl;
	cout << "             жизни начисляются игроку перед новым раундом." << endl;
	cout << "  *  если пользователь проиграл раунд, то компьютеру начисляются очки за" << endl;
	cout << "                 раунд в размере начальные жизни" << endl;


	// Лбъявляем пременные
	int level,          // Номер уровня игры
		a,              // Нижняя граница загадываемого числа
		b,              // Верхняя граница загадываемого числа
		magicNum,       // Загаданное число
		userNum,        // Число которе ввел пользыватель
		userChoice,      // Выбор пользывателя
		userLives,      // Количество жизней пользывателя
		userPoints,     // Очки пользывателя
		botPoints,      // Очки компьютера
		guessed;        //признак было ли угадано число (состояние процесса угадывания).
	userPoints = 0;
	botPoints = 0;
	guessed = 0;
	magicNum = 0;
	srand(time(NULL));  /*Для того, чтобы при каждом новом запуске программы
						 генерировалось новое число используем функцию srand(), а в
						 качестве ее параметра — вызов функции time(NULL).*/
	tryAgain: // это лейбл
	do {
		cout << "\n\n  Добро пожаловать в Игру!" << endl;
		cout << " Вы можете выбрать:" << endl;
		cout << " 1 - Начать игру." << endl;
		cout << " 2 - Выход." << endl;
		cout << " Сделайте Ваш выбор - ";
		cin >> userChoice;
		cout << endl << endl;
		switch (userChoice) {
		case 1:
		{
			cout << "\n Добро пожаловать на <1> уровень: Magic Number [1..10]!" << endl;
			a = 1;
			b = 10;
			userLives = (b - a + 1) / 2;
			cout << " Компьютер придумывает число..." << endl;
			Sleep(1000);
			cout << " Магическое число готово! Попробуем угадать?" << endl;

			for (int i = 0; i < 3; i++)
			{
				magicNum = a + rand() % (b - a);
				cout << "\n Раунд " << i + 1 << " начинается!" << endl;
				cout << " Ваши жизни - " << userLives << "." << endl;
				cout << " Ваши очки - " << userPoints << "." << endl;
				cout << " Очки компьютера - " << botPoints << endl;
				cout << " Попробуйте угадать! Ваше число? - ";
				cin >> userNum;
				if (userNum == magicNum)
				{
					cout << "\n ВЫ УГАДАЛИ МАГИЧЕСКОЕ ЧИСЛО!!!" << endl;
					cout << " Ваши очки - " << (userPoints = userPoints + 5) << "." << endl;
					cout << " Очки компьютера - " << botPoints << "." << endl;
					userLives++;
					guessed++;
				}
				else {
					cout << "\n УПС! ВЫ ПОТЕРЯЛИ 1 ЖИЗНЬ!" << endl;
					userLives--;
					cout << " Ваши жизни - " << userLives << "." << endl;
					cout << " Ваши очки - " << userPoints << "." << endl;
					cout << " Очки компьютера - " << (botPoints = botPoints + 5) << "." << endl;
					do {
						cout << "\n Хочешь небольшой намек? Это стоит 1 жизнь!" << endl;
						cout << " Ваш выбор:" << endl;
						cout << " 1 - Да" << endl;
						cout << " 0 - Нет" << endl;
						cout << " Сделайте выбор - ";
						cin >> userChoice;
						if (userChoice == 1)
						{
							if (userNum > magicNum)
							{
								cout << "\n Magic Nunber меньше... " << endl;
								userLives--;
							}
							else
							{
								cout << "\n Magic Nunber больше... " << endl;
								userLives--;
							}
						}
					}
					while ((userChoice != 1) && (userChoice != 0));

					while (magicNum != userNum && userLives >0)                      
					{                                                                
						cout << "\n Раунд " << i + 1 << " продолжается!" << endl;    
						cout << " Ваши жизни - " << userLives << "." << endl;        
						cout << " Ваши очки - " << userPoints << "." << endl;        
						cout << " Очки компьютера - " << botPoints << endl;          
						cout << " Попробуйте угадать! Ваше число? - ";               
						cin >> userNum;                                              
																					 
						if (userNum == magicNum)                                     
						{                                                            
							cout << "\n ВЫ УГАДАЛИ МАГИЧЕСКОЕ ЧИСЛО!!!" << endl;     
							cout << " Ваши очки - " << (userPoints = userPoints + 5) << "." << endl; 
							cout << " Очки компьютера - " << botPoints << "." << endl;               
							userLives++;                                                             
							guessed++;                                                               
						}                                                                             
						else {                                                                       
							cout << "\n УПС! ВЫ ПОТЕРЯЛИ 1 ЖИЗНЬ!" << endl;                          
							userLives--;                                                             
							cout << " Ваши жизни - " << userLives << "." << endl;                    
							cout << " Ваши очки - " << userPoints << "." << endl;                    
							cout << " Очки компьютера - " << (botPoints = botPoints + 5) << "." << endl;
							do {                                                                        
								cout << "\n Хочешь небольшой намек? Это стоит 1 жизнь!" << endl;        
								cout << " Ваш выбор:" << endl;                                          
								cout << " 1 - Да" << endl;                                              
								cout << " 0 - Нет" << endl;                                             
								cout << " Сделайте выбор - ";                                           
								cin >> userChoice;                                                      
								if (userChoice == 1)                                                    
								{                                                                       
									if (userNum > magicNum)                                             
									{                                                                   
										cout << "\n Magic Nunber меньше... " << endl;                   
										userLives--;                                                    
									}                                                                   
									else                                                                
									{                                                                    
										cout << "\n Magic Nunber больше... " << endl;                   
										userLives--;                                                    
									}                                                                   
								}                                                                       
							}                                                                           
							while ((userChoice != 1) && (userChoice != 0)); 

						}                                                                               
						                                                               
						{                                                                               
							cout << "\n ВЫ ПРОИГРАЛИ!" << endl;                                         
							cout << " Ваши жизни - " << userLives << endl << ".";                       
							cout << " Вы заработали очков- " << userPoints << "." << endl;              
							cout << " Компьютер заработал очков - " << botPoints << "." << endl;        
							goto tryAgain;                                                              
						}  
						if (userLives == 0);
					}                                                                                   
				}
			}
			while ((userLives > 0) && (guessed == 0));
			if (guessed < 2 && userPoints < botPoints)
			{
				cout << "\n ВЫ ПРОИГРАЛИ!" << endl;
				cout << " Ваши жизни - " << userLives << endl << ".";
				cout << " Вы заработали очков- " << userPoints << "." << endl;
				cout << " Компьютер заработал очков - " << botPoints << "." << endl;
			}
			else
			{
				cout << "\n ПОЗДРАВЛЯЮ! ВЫ ВЫИГРАЛИ <1> УРОВЕНЬ!!!:" << endl;
				cout << " Ваши жизни - " << userLives << "." << endl;
				cout << " Вы заработали очков - " << userPoints << "." << endl;
				cout << " Компьютер заработал очков - " << botPoints << "." << endl;
				do {
					cout << "\n Хочешь перейти на <2> уровень?" << endl;
					cout << " Ваш выбор:" << endl;
					cout << " 1 - Да" << endl;
					cout << " 0 - Нет" << endl;
					cout << " Сделайте выбор - ";
					cin >> userChoice;
					while ((userChoice != 1) && (userChoice != 0))

					if (userChoice == 1)
					{
						cout << "\n Добро пожаловать на <2> уровень: Magic Number:[10..100]!" << endl;
						a = 10;
						b = 100;
						cout << " Компьютер придумывает число..." << endl;
						Sleep(1000);
						magicNum =a + rand() % (b - a);
						cout << " Магическое число готово!  Попробуем угадать? " << endl;
						for (int i = 0; i < 2; i++)
						{
							cout << "\n Раунд " << i + 1 << " начинается." << endl;
							cout << " Ваши жизни- " << userLives << "." << endl;
							cout << " Ваши очки - " << userPoints << "." << endl;
							cout << " Очки компьютера - " << botPoints << endl;
							cout << " Попробуйте угадать! Ваше число? - ";
							cin >> userNum;
							if (userNum == magicNum)
							{
								cout << " ВЫ УГАДАЛИ МАГИЧЕСКОЕ ЧИСЛО!!!\n";
								cout << " Ваши очки - " << (userPoints = userPoints + 10) << "." << endl;
								cout << " Очки компьютера - " << botPoints << "." << endl;
								userLives++;
								guessed++;
							}
							else {
								cout << " УПС! ВЫ ПОТЕРЯЛИ 1 ЖИЗНЬ!" << endl;
								userLives--;
								cout << " Ваши жизни - " << userLives << "." << endl;
								cout << " Ваши очки - " << userPoints << "." << endl;
								cout << " Очки компьютера - " << (botPoints == userPoints + 10) << "."
									<< endl;
								do {
									cout << "\n Хочешь небольшой намек? Это стоит 1 жизнь! " << endl;
									cout << " Ваш выбор:" << endl;
									cout << " 1 - Да" << endl;
									cout << " 0 - Нет" << endl;
									cout << " сделайте выбор - ";
									cin >> userChoice;
									if (userChoice == 1)
									{
										if (userNum > magicNum)
										{
											cout << " Magic Nunber меньше..." << endl;
											userLives--;
										}
										else
										{
											cout << " Magic Nunber больше..." << endl;
											userLives--;
										}
									}
								} while ((userChoice != 1)&&(userChoice != 0));
								while (magicNum != userNum && userLives > 0)                      
								{                                                                
									cout << "\n Раунд " << i + 1 << " продолжается!" << endl;    
									cout << " Ваши жизни - " << userLives << "." << endl;        
									cout << " Ваши очки - " << userPoints << "." << endl;        
									cout << " Очки компьютера - " << botPoints << endl;          
									cout << " Попробуйте угадать! Ваше число? - ";               
									cin >> userNum;                                              
																								 
									if (userNum == magicNum)                                     
									{                                                            
										cout << "\n ВЫ УГАДАЛИ МАГИЧЕСКОЕ ЧИСЛО!!!" << endl;     
										cout << " Ваши очки - " << (userPoints = userPoints + 5) << "." << endl; 
										cout << " Очки компьютера - " << botPoints << "." << endl;               
										userLives++;                                                             
										guessed++;                                                               
									}                                                                            
									else {                                                                       
										cout << "\n УПС! ВЫ ПОТЕРЯЛИ 1 ЖИЗНЬ!" << endl;                          
										userLives--;                                                             
										cout << " Ваши жизни - " << userLives << "." << endl;                    
										cout << " Ваши очки - " << userPoints << "." << endl;                    
										cout << " Очки компьютера - " << (botPoints = botPoints + 5) << "." << endl;
										do {                                                                        
											cout << "\n Хочешь небольшой намек? Это стоит 1 жизнь!" << endl;        
											cout << " Ваш выбор:" << endl;                                          
											cout << " 1 - Да" << endl;                                              
											cout << " 0 - Нет" << endl;                                             
											cout << " Сделайте выбор - ";                                           
											cin >> userChoice;                                                      
											if (userChoice == 1)                                                    
											{                                                                       
												if (userNum > magicNum)                                             
												{                                                                   
													cout << "\n Magic Nunber меньше... " << endl;                   
													userLives--;                                                    
												}                                                                   
												else                                                                
												{                                                                   
													cout << "\n Magic Nunber больше... " << endl;                   
													userLives--;                                                    
												}                                                                   
											}                                                                       
										}                                                                           
										while ((userChoice != 1) && (userChoice != 0));                                                                                             
									}                                                                               
									if (userLives == 0)                                                               
									{                                                                               
										cout << "\n ВЫ ПРОИГРАЛИ!" << endl;                                         
										cout << " Ваши жизни - " << userLives << endl << ".";                       
										cout << " Вы заработали очков- " << userPoints << "." << endl;              
										cout << " Компьютер заработал очков - " << botPoints << "." << endl;        
										goto tryAgain;                                                              
									}                                                                                 
								}
							}
						}
						while ((userLives > 0) && (guessed == 0));
						/*userPoints = userLives * 10;*/
						if (guessed < 4)
						{
							cout << "\n Вы проиграли!" << endl;
						}
						else
						{
							cout << "\n\t ВЫ ПОБЕДИЛИ!!!" << endl;
							cout << "\n Вы выиграли <2> раунд и игру Guess My Number!!!" << endl;
							cout << " Ваши жизни - " << userLives << "." << endl;
							cout << " Ваши очки - " << userPoints << "." << endl;
							cout << " Очки компьютера - " << botPoints << endl << endl << endl;
						}
						break;
					}
					else
					{
						cout << " До встречи!" << endl;
						break;
					}

				} while ((userChoice != 1) &&
					(userChoice != 0));
			}
			break;
		}

		case 2:
		{
			cout << " До встречи!\n" << endl;
			break;
		}
		default:
			cout << " Неверный пункт меню!" << endl;
		}

	} while (userChoice != 2);
	return 0;
}

