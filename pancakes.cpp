
//� ������������� ������� �����������
/*
���� ������ ������ ���������� �������.
������������ �������� ���������� � ���� - ����� ������ �����
���� ������� � ������ ������� ������ ��� �������� �� ��������.
���������� �� ����������� ���������� ����� �������� �������������
����� ����� �� �������� �������.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	cout << "\n ��������� ���������� �������. " << endl;
	cout << endl;
	int puncakeArray[10] = { 10,6,7,4,6,5,3,9,2,8 };
	int arSize = sizeof(puncakeArray) / sizeof(int);
	int buff;
	int max;
	int maxArrayElement;

	
	cout << " ������ ������� : "<<endl;
	//������� �������� ������
	for (int i = 0; i < arSize; i++)
	{
		cout << " ������ �" << i+1 <<" " << puncakeArray[i] << " �� " << endl;
	}

	for (int i = arSize - 1; i >= 0; i--)
	{
		max = puncakeArray[i];
		maxArrayElement = i;
		//���� ���� �������
		for (int j = i; j >= 0; j--)
		{
			if (puncakeArray[j] > max)
			{
				max = puncakeArray[j];
				maxArrayElement = j;
			}
		}

		cout << endl << "------------------------------------" << endl;
		cout << " ��������� " << arSize - i << endl;
		cout<< " ����� ������� ������ �" << max<<"��" << endl << endl;

		//�������������� ����� �������, ����� ���� �������� ������
		for (int flip = 0; flip <= maxArrayElement / 2; flip++)
		{
			//�������� �� ������� ������� ������������
			if (maxArrayElement == 0)
			{
				break;
			}

			buff = puncakeArray[flip];
			puncakeArray[flip] = puncakeArray[maxArrayElement - flip];
			puncakeArray[maxArrayElement - flip] = buff;
		}
		//������� �� ����� ��������� ����������1
		for (int output = 0; output < arSize; output++)
		{
			cout << " ������ �"<< output+1<<" " << puncakeArray[output]<<"��" << endl;
		}

		cout << " ��������������, ����� ����� ������� �������� ����� ������" << endl;
		//��������������, ����� ���� �������� ����� ������
		for (int j1 = 0; j1 <= i / 2; j1++)
		{
			buff = puncakeArray[j1];
			puncakeArray[j1] = puncakeArray[i - j1];
			puncakeArray[i - j1] = buff;
		}
		//������� �� ����� ��������� ����������2
		for (int output = 0; output < arSize; output++)
		{
			cout << " ������ �"<< output+1 <<" " << puncakeArray[output] << "��" << endl;
		}


	}
	cout << endl << " ���������: \n";
	//������� ��������������� ������
	for (int i = 0; i < arSize; i++)
	{
		cout << " ������ �" << i+1 <<" " << puncakeArray[i] << "��" << endl;
	}
	cout << "\n ��������� ��������!!!" << endl;

	return 0;
}