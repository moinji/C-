#include <iostream>
using namespace std; 

int main() {
	int num;
	int sum = 0;
	do{
		cout << "���� �Է� : ";
		cin >> num;
		sum += num;
	}while(num != 0);
	cout << "�հ� : " << sum;
	return 0;
}
