/*Есть пустое поле игры «Морской бой».
Вывести в консоль номера полей игры:
A0 B0 C0 D0 E0 F0 G0 H0 I0 J0
A1 B1 C1 D1 E1 F1 G1 H1 I1 J1
…..
A9 B9 C9 D9 E9 F9 G9 H9 I9 J9*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(2151);
	SetConsoleOutputCP(1251);
	// Выводим тест на экран
	cout << "\n Вывести в консоль номера полей игры:" << endl;
	cout << "\t «Морской бой»" << endl;
	
	for (int i = 0; i <=0; i++) 
	{
		for (int a = 0; a <=9; a++)
		{
			{

				cout << "\n\t A" << a<<" B"<<a<<" C"<<a<<" D"<<a<<" E"<<a<<" F"<<a<<" G"<<a<<" H"<<a
					<<" I"<<a<<" J"<<a << endl;
			
			}
		}
		
	}
	return 0;
}