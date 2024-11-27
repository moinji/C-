#include <iostream>
using namespace std;

int swp(int &x, int &y){
	int tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a = 100;
	int b = 200;

	cout << a << " " << b << endl;
	swp(a, b);
	cout << a << " " << b << endl;
	return 0;
}
