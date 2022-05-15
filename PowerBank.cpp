// Определение минимальной емкости PowerBank
#include <iostream>
// Определение пространства имен, которое
// содержит cout<<
using namespace std;
// Главная функция
int main()
{
	/* Обьявляем численную переменную N - ёмкость 
	аккамулятора смартфона в мАч */
	int N = 3000;
	/* Обьявляем численную переменную T -три полных
	цикла заряда смартфона */
	int T = 3;
	// Обьявляем переменную PowerBank - минимальная 
	//емкость PowerBank
	float PowerBank;
	// Проводим вычисление
	PowerBank = N * T;
	// Выводим значение на экран
	cout << "\n\n\n\n\t\t\t\t""Minimum power of the PowerBank - " << PowerBank  <<"mAh" "\n\n\n\n\n\n";
	
	return 0;
}
