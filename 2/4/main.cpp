#include <iostream>
using namespace std;

int main() {
	int num;
	bool n = 0;
	for(int i = 0; i < 5; i++){
		cout << "정수 입력 : ";
		cin >> num;
		if (num == 5)
			n = true;
	}
	if (n == 0)
		cout << "사용자 승";
	else
		cout << "컴퓨터 승"; 
	return 0;
}
