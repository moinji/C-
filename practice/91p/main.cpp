#include <iostream>
#include <math.h>

using namespace std;


int main() {
	int number, width, height, area, r;
	
	cout << "������ �����Ͻÿ�(1, 2, 3) : ";
	cin >> number;
	
	if (number == 1){
		cout << "���� : ";
		cin  >> width;
		cout << "���� : ";
		cin >> height;
		area = width * height;
		cout << "���� : " << area << endl;
	}else if (number == 2){
		cout << "������ : ";
		cin >> r;
		area = r * r * M_PI;
		cout << "���� : " << area << endl;
	}else{
		cout << "�ùٸ��� ���� �����Դϴ�." << endl;
	}
	
	return 0;
}
