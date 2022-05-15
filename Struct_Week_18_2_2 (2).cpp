//����������� ��������� ������������(�����,�������(������ �������), ����� ���������, �������� ���������, ������� �����, ����, ��� ������� �������).
//	�������� ������� ��� ������� ��������, �������������������, ������ ��������

#include<iostream>
#include<string>
using namespace std;


struct Auto
{
	float length;  //�����
	float clearance;   //�������
	float engineCapacity; //����� ���������
	int enginePower; //�������� ���������
	int wheelDiameter; //������� �����
	string color; //����
	string transmission; //��� ������� �������
}bmw;

void show(Auto& autos) {
	cout << "����� " << autos.length << endl;
	cout << "������� " << autos.clearance << endl;
	cout << "����� ��������� " << autos.engineCapacity << endl;
	cout << "�������� ��������� " << autos.enginePower << endl;
	cout << "������� ����� " << autos.wheelDiameter << endl;
	cout << "���� " << autos.color << endl;
	cout << "��� ������� ������� " << autos.transmission << endl;
}

void setPar(Auto& autos, bool& set) {
	cout << "������� ������ ���� ";
	cin >> autos.length;
	cout << "������� ������� ���� ";
	cin >> autos.clearance;
	cout << "������� ����� ��������� ���� ";
	cin >> autos.engineCapacity;
	cout << "������� ��������� ��������� ���� ";
	cin >> autos.enginePower;
	cout << "������� ������� ����� ���� ";
	cin >> autos.wheelDiameter;
	cout << "������� ���� ���� ";
	cin >> autos.color;
	cout << "������� ��� ������� ������� ���� ";
	cin >> autos.transmission;
	set = true;
}

void search(Auto& autos) {
	int searchPar = 0;

	while (searchPar != 8)
	{
		cout << "������� ����� �������� �� ������ �����" << endl;
		cout << "1 - �����\n2 - �������\n3 - ����� ���������\n4 - �������� ���������\n5 - ������� �����\n6 - ����\n7 - ��� ������� �������\n8 - �����\n";
		cin >> searchPar;
		switch (searchPar)
		{
		case 1:
			cout << "����� " << autos.length << endl;
			cout << endl;
			break;
		case 2:
			cout << "������� " << autos.clearance << endl;
			cout << endl;
			break;
		case 3:
			cout << "����� ��������� " << autos.engineCapacity << endl;
			cout << endl;
			break;
		case 4:
			cout << "�������� ��������� " << autos.enginePower << endl;
			cout << endl;
			break;
		case 5:
			cout << "������� ����� " << autos.wheelDiameter << endl;
			cout << endl;
			break;
		case 6:
			cout << "���� " << autos.color << endl;
			cout << endl;
			break;
		case 7:
			cout << "��� ������� ������� " << autos.transmission << endl;
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
		cout << "������� ��������" << endl;
		cout << "1 - ������� ��������\n2 - ����� ����������\n3 - ������ ��������\n4 - �����\n";
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
				cout << "��������� �����������. ������� ���������� ��." << endl;
				setPar(bmw, set);
				cout << endl;
			}
			show(bmw);
			cout << endl;
			break;
		case 3:
			if (set == false)
			{
				cout << "��������� �����������. ������� ���������� ��." << endl;
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