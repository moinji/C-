#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double r;
	double v;
	double a;
	
	cout << "������ : ";
	cin >> r;
	
	a = 4 * M_PI * pow(r, 2);
	v = (4 / 3) * M_PI * pow(r, 3);
	
	cout << "ǥ���� : " << a << endl;
	cout << "���� : " << v;
	return 0;
}
