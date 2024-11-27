#include <iostream>

using namespace std;

int main() {
	const double square = 3.3058;
	double mysquare;
	double squaremeter;
	
	cout << "평 : ";
	cin >> mysquare;
	
	squaremeter = mysquare * square;
	
	cout << "평방미터 : " << squaremeter << endl; 
	return 0;
}
