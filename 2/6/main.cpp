#include <iostream>
using namespace std;

int main() {
	int i, j;
	for(i = 0; i < 7; i++){
		for(j = 0; j < i; j++)
			cout << j + 1;
		for(j = i; j < 7; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
