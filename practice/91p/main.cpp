#include <iostream>
#include <math.h>

using namespace std;


int main() {
	int number, width, height, area, r;
	
	cout << "도형을 선택하시오(1, 2, 3) : ";
	cin >> number;
	
	if (number == 1){
		cout << "가로 : ";
		cin  >> width;
		cout << "세로 : ";
		cin >> height;
		area = width * height;
		cout << "면적 : " << area << endl;
	}else if (number == 2){
		cout << "반지름 : ";
		cin >> r;
		area = r * r * M_PI;
		cout << "면적 : " << area << endl;
	}else{
		cout << "올바르지 않은 선택입니다." << endl;
	}
	
	return 0;
}
