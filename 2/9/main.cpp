#include <iostream>
using namespace std;

int main() {
	int fah;
	double cel;
	for(fah = 0; fah <= 100; fah+=10){
		cel = ((fah - 32.0) * 5.0) / 9.0;
		cout << fah << "	" << cel << endl;
	}
	return 0;
}
