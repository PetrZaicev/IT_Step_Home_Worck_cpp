/**/
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

typedef unsigned int uint; // �������������� ���� ������

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "\n �������� ���������� ������. ��������� ��� " << endl;
	cout << " ���������� ������� � �������� �� �����. ������������ " << endl;
	cout << " �������� ���������� ������� � ��������� (�����, ����" << endl;
	cout << " ��, �����, ����). ��������� ����� ������� � �������� �� " << endl;
	cout << " ����� ���������� ���������. ����� �����������. " << endl;

	uint row, col, side, temp, shift;
	bool flag = true;
	bool& aFlag = flag;

	cout << "\n �������� ������ �������" << endl;

	do
	{
		cout << "\n ������� ���������� ����� �� 10: "; cin >> row; cout << endl;
		cout << "������� ���������� �������� �� 10: "; cin >> col; cout << endl;

		uint** arr = new uint * [row]; // ��������� ������������ ������

		for (uint i = 0; i < row; i++) //��������� ������ ��� ������
		{
			arr[i] = new uint[col];
		}

		if (col > 10 || col < 0 || row > 10 || row < 0) // �������� ��������� ������� ���-�� ����� � ��������
		{
			cout << "�������� ���� ������ � �������. ��������� ����!" << endl;
			aFlag = true;
		}
		else
		{
			srand(time(0));

			//���������� �������
			for (uint i = 0; i < row; i++)
			{
				for (uint j = 0; j < col; j++)
				{
					arr[i][j] = rand() % 500;
				}
			}

			//����� �������
			for (uint i = 0; i < row; i++)
			{
				cout << " ";

				for (uint j = 0; j < col; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}

			cout << endl;

			cout << "\n ����� � ������� ����� ����������:\n";
			cout << " 1) �����;\n";
			cout << " 2) ������;\n";
			cout << " 3) �����;\n";
			cout<< " 4) ����;\n"<< endl;

			cout << " ������� ������� ������: "; cin >> side; cout << endl;
			cout << " ������� ���������� �������: "; cin >> shift; cout << endl; cout << endl;

			if (side == 1) // ����� �����
			{
				for (uint i = 0; i < shift; i++)
				{
					for (uint j = 0; j < row; j++)
					{
						temp = arr[j][0];

						for (uint g = 0; g < col - 1; g++)
						{
							arr[j][g] = arr[j][g + 1];
						}

						arr[j][col - 1] = temp;
					}
				}
			}
			else if (side == 2) // ����� ������
			{
				for (uint i = 0; i < shift; i++)
				{
					for (uint j = 0; j < row; j++)
					{
						temp = arr[j][col - 1];

						for (uint g = col - 1; g > 0; g--)
						{
							arr[j][g] = arr[j][g - 1];
						}

						arr[j][0] = temp;
					}
				}
			}
			else if (side == 3) // ����� �����
			{
				for (uint i = 0; i < shift; i++)
				{
					for (uint j = 0; j < col; j++)
					{
						temp = arr[0][j];

						for (uint g = 0; g < row - 1; g++)
						{
							arr[g][j] = arr[g + 1][j];
						}

						arr[row - 1][j] = temp;
					}
				}
			}
			else if (side == 4) // ����� ����
			{
				for (uint i = 0; i < shift; i++)
				{
					for (uint j = 0; j < col; j++)
					{
						temp = arr[row - 1][j];

						for (uint g = row - 1; g > 0; g--)
						{
							arr[g][j] = arr[g - 1][j];
						}

						arr[0][j] = temp;
					}
				}
			}
			cout << " ��������� ������.";
			cout << endl; cout << endl;

			//����� ������� ����� ������

			for (int i = 0; i < row; i++)
			{
				cout << " ";

				for (int j = 0; j < col; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}

			aFlag = false;
		}

		for (int i = 0; i < row; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;

	} while (aFlag);

	cout << endl; cout << endl;
	system("pause");
	return 0;
}