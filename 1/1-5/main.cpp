#include <iostream>

using namespace std;

int main() {
	const double square = 3.3058;
	double mysquare;
	double squaremeter;
	
	cout << "�� : ";
	cin >> mysquare;
	
	squaremeter = mysquare * square;
	
	cout << "������ : " << squaremeter << endl; 
	return 0;
}
