#include <iostream>
#include <cmath>
using namespace std;

double hypot(double x, double y){
	return sqrt(x*x + y*y);
}
int main() {
	double x, y;
	cout << "�����ﰢ���� �Ѻ� : ";
	cin >> x;
	cout << "�����ﰢ���� �Ѻ� : ";
	cin >> y;
	
	cout << "���� : " << hypot(x, y) << endl; 
	return 0;
}
