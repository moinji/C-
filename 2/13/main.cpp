#include <iostream>
using namespace std;
int main() {
	int num;
	int a, b, c, i;
	cout << "몇 항까지 구할까요 : ";
	cin >> num;
	a = 0;
	b = 1;
	cout << a << " " << b << " ";
	for(i = 3; i <= num; i++){
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
	return 0;
}
