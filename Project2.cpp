#include <iostream>
using namespace std;

int main()
{
	string a; 
	cin >> a;
	if (a >= '0' && a <='9') {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}