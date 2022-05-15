// Pokupka
#include <iostream>
// Определение пространства имен, в котором есть cout<<
using namespace std;
// Главная функция
int main()
{
	//Обьявляем переменную Discount
	float Discount=0.05;
	// Обьявляем переменную Cost
    float Cost = 10.50;
	// Приглашение ввести цену товара
	cout << "What's the cost?\n";
	// Ввод значения в переменную Cost
	cin >> Cost;
	// Обьявлем переменную
	int Count = 5;
	// Приглашение ввести количество
	cout << "How much?\n";
	// Ввод значения в переменную Count
	cin>> Count;
	// Обьявляем переменную 
	float Price;
	// Вычесляем значение переменной Price
	Price = Count * Cost - Count * Cost * Discount;
	// Выводим итоговую стоимость товара со скидкой
	cout << "Please, pay:" << Price << "\n";

	return 0;
}