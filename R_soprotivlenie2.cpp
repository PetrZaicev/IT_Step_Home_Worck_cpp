//��������� �������� ������������� R0 
#include <iostream>
// ���������� ����������� ����
using namespace std;
// �������� �������
int main() 
{
    setlocale(LC_ALL, "rus");

    // ��������� ���������� 
    double R, R0, R1, R2, R3;
    // ������� �� ����� R1
    cout << "������� �������� R1: ";
    // ���������� ������ �������� R1
    cin >> R1;
    // ������� �� ����� R2
    cout << "������� �������� R2: ";
    //���������� ������ �������� R2
	cin >> R2;
    // ������� �� ����� R3
    cout << "������� �������� R3: ";
    //���������� ������ �������� R2
    cin >> R3;
    // ���������� ������
    R0 = 1 / R1 + 1 / R2 + 1 / R3;
    R = 1 / R0;
    cout << "������������� R = " << R<<"\n\n\n";

    return 0;

}