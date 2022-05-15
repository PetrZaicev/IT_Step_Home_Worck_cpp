// Game
#include <iostream>
// Определение пространства имен, в котором есть count<<
using namespace std;
// Главня функция 
int main()
{
	// Приглашение "Давай Играть!"
	cout << "Let's play!\n";
	// Обьявление переменной i
	int i;
	// Приглашение "Введите число"
	cout << "Enter a nuber:";
	// Вводчисла
	cin >> i;
	// вывод числа, "которое загадал копмпьютер"
	cout << "I have "<<i + 1 << "\n";
	// Вывод результата игры
	cout << "I'am winner!\n";
	return 0;

}