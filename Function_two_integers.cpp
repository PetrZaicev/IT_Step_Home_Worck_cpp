/*Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел
из диапазона между ними.*/

#include "iostream"
#include <windows.h>
using namespace std;

unsigned long long f(int a, int b)
{
	return -(a + b) * (a - b + 1) / 2;
}
int main() 
{ 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned long long a, b;
	cout << "\n Функция, которая получает в качестве параметров 2 целых числа"<<endl;
	cout << " и возвращает сумму чисел из диапазона между ними." << endl;
	cout << "\n Введите число <a> - ";
	cin >> a;
	cout << " Введите число <b> - ";
	cin>> b;
	cout <<" "<< f(a, b) << endl;

	return 0;
}