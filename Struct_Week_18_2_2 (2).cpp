//Реализовать структуру «Автомобиль»(длина,клиренс(высота посадки), объем двигателя, мощность двигателя, диаметр колес, цвет, тип коробки передач).
//	Создайте функции для задания значений, отображениязначений, поиска значений

#include<iostream>
#include<string>
using namespace std;


struct Auto
{
	float length;  //длина
	float clearance;   //клиренс
	float engineCapacity; //обьем двигателя
	int enginePower; //мощность двигателя
	int wheelDiameter; //диаметр колес
	string color; //цвет
	string transmission; //тип коробки передач
}bmw;

void show(Auto& autos) {
	cout << "длина " << autos.length << endl;
	cout << "клиренс " << autos.clearance << endl;
	cout << "объем двигателя " << autos.engineCapacity << endl;
	cout << "мощность двигателя " << autos.enginePower << endl;
	cout << "диаметр колес " << autos.wheelDiameter << endl;
	cout << "цвет " << autos.color << endl;
	cout << "тип коробки передач " << autos.transmission << endl;
}

void setPar(Auto& autos, bool& set) {
	cout << "Укажите длинну авто ";
	cin >> autos.length;
	cout << "Укажите клиренс авто ";
	cin >> autos.clearance;
	cout << "Укажите обьем двигателя авто ";
	cin >> autos.engineCapacity;
	cout << "Укажите мощьность двигателя авто ";
	cin >> autos.enginePower;
	cout << "Укажите диаметр колес авто ";
	cin >> autos.wheelDiameter;
	cout << "Укажите цвет авто ";
	cin >> autos.color;
	cout << "Укажите тип коробки передач авто ";
	cin >> autos.transmission;
	set = true;
}

void search(Auto& autos) {
	int searchPar = 0;

	while (searchPar != 8)
	{
		cout << "Укажите какой параметр вы хотите найти" << endl;
		cout << "1 - длина\n2 - клиренс\n3 - объем двигателя\n4 - мощность двигателя\n5 - диаметр колес\n6 - цвет\n7 - тип коробки передач\n8 - выход\n";
		cin >> searchPar;
		switch (searchPar)
		{
		case 1:
			cout << "длина " << autos.length << endl;
			cout << endl;
			break;
		case 2:
			cout << "клиренс " << autos.clearance << endl;
			cout << endl;
			break;
		case 3:
			cout << "объем двигателя " << autos.engineCapacity << endl;
			cout << endl;
			break;
		case 4:
			cout << "мощность двигателя " << autos.enginePower << endl;
			cout << endl;
			break;
		case 5:
			cout << "диаметр колес " << autos.wheelDiameter << endl;
			cout << endl;
			break;
		case 6:
			cout << "цвет " << autos.color << endl;
			cout << endl;
			break;
		case 7:
			cout << "тип коробки передач " << autos.transmission << endl;
			cout << endl;
			break;
		case 8:
			break;
		default:
			break;
		}

	}

}

int main() {
	setlocale(LC_ALL, "rus");
	int k = 0;
	bool set = false;

	while (k != 4)
	{
		cout << "Укажите действие" << endl;
		cout << "1 - задания значений\n2 - показ параметров\n3 - поиска значений\n4 - выход\n";
		cin >> k;
		switch (k)
		{
		case 1:
			setPar(bmw, set);
			cout << endl;
			break;
		case 2:
			if (set == false)
			{
				cout << "Параметры отсутствуют. вначале установите их." << endl;
				setPar(bmw, set);
				cout << endl;
			}
			show(bmw);
			cout << endl;
			break;
		case 3:
			if (set == false)
			{
				cout << "Параметры отсутствуют. вначале установите их." << endl;
				setPar(bmw, set);
				cout << endl;
			}
			search(bmw);
			cout << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}