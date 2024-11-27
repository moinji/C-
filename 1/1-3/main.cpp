#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int side1;
	int side2;

	cout << "첫 번째 변 : "; 
	cin >> side1;
	cout << endl; 
	cout << "두 번째 변 : "; 
	cin >> side2;
	cout << endl << endl; 
	
	int sum = ((side1*side1)+(side2*side2));
	int hypo = sqrt(sum);
	
	cout << "빗변 길이 : " << hypo << endl;
	
	return 0;
}
