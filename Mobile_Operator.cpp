/* ��������� ������ ��������� , ������ ���������
 ���������� �����*/
#include <iostream>
#include <windows.h>
// ������������ ����
using namespace std;

// �������� �������
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ��������� ����������
	long long User_number, Opanent_number, Min;
	float MegaFon_price = 2.0, BeeLine_price = 1.80, Tele2_price = 1.60,
		MTS_price = 1.50, Yota_price = 1.40;
	// ������� �����
	cout << "\n\n ������� ���� ����� �������� � ������� 8 (xxx) xxx xx xx : ";
	// ���������� ������ �����
	cin >> User_number;
	// ���������� ������ ���������
	if (((User_number >= 89210000000)) && ((User_number <= 89219999999)) ||
		((User_number >= 89310000000) && (User_number <= 89319999999)))
	{
		cout << " ��������� �������� - Megafon ��������� .\n";
	}
    else if((User_number >= 89990000000) && (User_number <= 89999999999))
	{
		cout << " ��������� �������� - Yota .\n";
	}
	else if ((User_number >= 89640000000) && (User_number <= 89649999999))
    {
		cout << " ��������� �������� - BeeLine .\n";
    }
	else if((User_number >= 89000000000) && (User_number <= 89009999999))
	{
		cout << " ��������� �������� - Tele2 .\n";
	}
	else if(((User_number >= 89110000000) && (User_number <= 89119999999))||
		((User_number >= 89810000000) && (User_number <= 89819999999)))
	{
		cout << " ��������� �������� - MTC .\n";
	}
	else
	{
		cout << " ����������� ������� ��������! \n";
	}
	// ������� ����
	cout << " ������� ����� ����������� � ������� 8 (xxx) xxx xx xx   : ";
	// ���������� ������ ����� �����������
	cin >> Opanent_number;
	// ���������� ��������� �����������
	if (((Opanent_number >= 89210000000)) && ((Opanent_number <= 89219999999)) ||
		((Opanent_number >= 89310000000) && (Opanent_number <= 89319999999)))
	{
		cout << " ��������� �������� - Megafon ����������� ������� .\n";
	}
	else if ((Opanent_number >= 89990000000) && (Opanent_number <= 89999999999))
	{
		cout << " ��������� �������� - Yota .\n";
	}
	else if ((Opanent_number >= 89640000000) && (Opanent_number <= 89649999999))
	{
		cout << " ��������� �������� - BeeLine ����������� ������� .\n";
	}
	else if ((Opanent_number >= 89000000000) && (Opanent_number <= 89009999999))
	{
		cout << " ��������� �������� - Tele2 ." << endl;
	}
	else if (((Opanent_number >= 89110000000) && (Opanent_number <= 89119999999)) ||
		((Opanent_number >= 89810000000) && (Opanent_number <= 89819999999)))
	{
		cout << " ��������� �������� - MTC ����������� ������� .\n";
	}
	else
	{
		cout << " ����������� ��������!  \n";
	}
	// ������� ����� �� �����
	cout << " ������� ����� ��������� � ������� :";
	cin >> Min;
	// ���������� �����������
	if ((((User_number >= 89210000000)) && ((User_number <= 89219999999)) ||
		((User_number >= 89310000000) && (User_number <= 89319999999)))==
		(((Opanent_number >= 89210000000)) && ((Opanent_number <= 89219999999)) ||
		((Opanent_number >= 89310000000) && (Opanent_number <= 89319999999))))
	{
		cout << " ��������� ������: ���������� ������ ������ ���� - Megafon ����������� ������� .\n";
	}
	else if (((User_number >= 89990000000) && (User_number <= 89999999999))==
		((Opanent_number >= 89990000000) && (Opanent_number <= 89999999999)))
	{
		cout << " ��������� ������: ���������� ������ ������ ���� - Yota .\n"; 
	}
	else if (((User_number >= 89640000000) && (User_number <= 89649999999)) ==
		((Opanent_number >= 89640000000) && (Opanent_number <= 89649999999)))
	{
		cout << " ��������� ������: ���������� ������ ������ ���� - BeeLine .\n";
	}
	
	
 return 0;
}

