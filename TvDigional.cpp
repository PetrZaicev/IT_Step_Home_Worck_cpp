// ������ ��������� �� �� ������ � ��.
#include <iostream>
// ���������� ������������ ����, � ������� 
// ���� cout<<
using namespace std;

// ������� �������
int main()
{
	// ��������� ��������� ���������� ��������� ��
	const int TvDioganal = 42;
	// ��������� ��������� ��������� ����� � ��
	const float OneInch = 2.54;
	// ��������� ���������� - ��������� � �����������
	float DioganalSm;
	// ��������� �������� ���������� DigionalSM
	DioganalSm = TvDioganal * OneInch;
	// ������� �������� ��������� �� � �� �� �����
	cout <<"\n\n\t" "Dioganal Tv in centimeters:" << DioganalSm << "\n";
	return 0;
}   



