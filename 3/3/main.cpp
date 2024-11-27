#include <iostream>
#include <cmath>
using namespace std;

double hypot(double x, double y){
	return sqrt(x*x + y*y);
}
int main() {
	double x, y;
	cout << "직각삼각형의 한변 : ";
	cin >> x;
	cout << "직각삼각형의 한변 : ";
	cin >> y;
	
	cout << "빗변 : " << hypot(x, y) << endl; 
	return 0;
}
