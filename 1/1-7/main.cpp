#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double r;
	double v;
	double a;
	
	cout << "반지름 : ";
	cin >> r;
	
	a = 4 * M_PI * pow(r, 2);
	v = (4 / 3) * M_PI * pow(r, 3);
	
	cout << "표면적 : " << a << endl;
	cout << "부피 : " << v;
	return 0;
}
