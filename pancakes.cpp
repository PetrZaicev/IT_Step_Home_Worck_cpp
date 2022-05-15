
//С промежуточным выводом результатов
/*
Есть стопка оладий различного радиуса.
Единственная операция проводимая с ними - между любыми двумя
суем лопатку и меняем порядок оладий над лопаткой на обратный.
Необходимо за минимальное количество таких операций отсортировать
снизу вверх по убыванию радиуса.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	cout << "\n Программа сортировки оладьев. " << endl;
	cout << endl;
	int puncakeArray[10] = { 10,6,7,4,6,5,3,9,2,8 };
	int arSize = sizeof(puncakeArray) / sizeof(int);
	int buff;
	int max;
	int maxArrayElement;

	
	cout << " Стопка оладьев : "<<endl;
	//выводим исходный массив
	for (int i = 0; i < arSize; i++)
	{
		cout << " Оладья №" << i+1 <<" " << puncakeArray[i] << " см " << endl;
	}

	for (int i = arSize - 1; i >= 0; i--)
	{
		max = puncakeArray[i];
		maxArrayElement = i;
		//ищем макс элемент
		for (int j = i; j >= 0; j--)
		{
			if (puncakeArray[j] > max)
			{
				max = puncakeArray[j];
				maxArrayElement = j;
			}
		}

		cout << endl << "------------------------------------" << endl;
		cout << " Переворот " << arSize - i << endl;
		cout<< " Самая большая оладья №" << max<<"см" << endl << endl;

		//переворачиваем часть массива, чтобы макс оказался сверху
		for (int flip = 0; flip <= maxArrayElement / 2; flip++)
		{
			//является ли верхний элемент максимальным
			if (maxArrayElement == 0)
			{
				break;
			}

			buff = puncakeArray[flip];
			puncakeArray[flip] = puncakeArray[maxArrayElement - flip];
			puncakeArray[maxArrayElement - flip] = buff;
		}
		//выводим на экран результат переворота1
		for (int output = 0; output < arSize; output++)
		{
			cout << " Оладья №"<< output+1<<" " << puncakeArray[output]<<"см" << endl;
		}

		cout << " Переворачиваем, чтобы самая большая оказался внизу стопки" << endl;
		//переворачиваем, чтобы макс оказался внизу стопки
		for (int j1 = 0; j1 <= i / 2; j1++)
		{
			buff = puncakeArray[j1];
			puncakeArray[j1] = puncakeArray[i - j1];
			puncakeArray[i - j1] = buff;
		}
		//выводим на экран результат переворота2
		for (int output = 0; output < arSize; output++)
		{
			cout << " Оладья №"<< output+1 <<" " << puncakeArray[output] << "см" << endl;
		}


	}
	cout << endl << " Результат: \n";
	//выводим отсортированный массив
	for (int i = 0; i < arSize; i++)
	{
		cout << " Оладья №" << i+1 <<" " << puncakeArray[i] << "см" << endl;
	}
	cout << "\n ПРИЯТНОГО АППЕТИТА!!!" << endl;

	return 0;
}