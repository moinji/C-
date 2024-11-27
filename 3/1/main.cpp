#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y, z;
	int solution; 
	cout << "세 개의 정수를 입력하시오 : ";
	cin >> x >> y >> z;
	if(x>=y>=z || x>=z>=y)
		solution = x;
	else if(y>=x>=z ||y>=z>=x)
		solution = y;
	else
		solution = z;
	
	cout << "가장 큰 정수는 : " << solution <<endl; 
	return 0;
}
