#include <iostream>
#include <cmath>
using namespace std;	

inline double clac_volumn(double radius){
	return (4.0/3.0*3.14*pow(radius, 3));
}
	
	
int main() {
	double volumn;
	double N;
	cout << "�������� �Է��Ͻÿ� : ";
	cin >> N;
	
	volumn = clac_volumn(N);
	
	cout << "���� ���Ǵ� : " << volumn << endl; 
	
	return 0;
}
