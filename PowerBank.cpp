// ����������� ����������� ������� PowerBank
#include <iostream>
// ����������� ������������ ����, �������
// �������� cout<<
using namespace std;
// ������� �������
int main()
{
	/* ��������� ��������� ���������� N - ������� 
	������������ ��������� � ��� */
	int N = 3000;
	/* ��������� ��������� ���������� T -��� ������
	����� ������ ��������� */
	int T = 3;
	// ��������� ���������� PowerBank - ����������� 
	//������� PowerBank
	float PowerBank;
	// �������� ����������
	PowerBank = N * T;
	// ������� �������� �� �����
	cout << "\n\n\n\n\t\t\t\t""Minimum power of the PowerBank - " << PowerBank  <<"mAh" "\n\n\n\n\n\n";
	
	return 0;
}
