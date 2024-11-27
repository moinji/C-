#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int list[10];
	int max = 0;
	
	for (int& e : list){
		e = rand() % 100 + 1;
		cout << e << " ";
		if (e > max)
			max = e;
	}
	cout << endl << "ÃÖ´ñ°ª : " << max; 
	
	
	return 0;
}
