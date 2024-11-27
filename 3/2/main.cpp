#include <iostream>
#include <cmath>
using namespace std;	

inline double clac_volumn(double radius){
	return (4.0/3.0*3.14*pow(radius, 3));
}
	
	
int main() {
	double volumn;
	double N;
	cout << "반지름을 입력하시오 : ";
	cin >> N;
	
	volumn = clac_volumn(N);
	
	cout << "구의 부피는 : " << volumn << endl; 
	
	return 0;
}
