#include <iostream>
using namespace std; 

int main() {
	int num;
	int sum = 0;
	do{
		cout << "정수 입력 : ";
		cin >> num;
		sum += num;
	}while(num != 0);
	cout << "합계 : " << sum;
	return 0;
}
