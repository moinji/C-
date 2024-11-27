#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	while(true){
		int x = rand() % 100;
		int y = rand() % 100;
		int sum = x + y;
		int answer;
	
		cout << "산수 문제를 출제합니다." << endl;
		cout << x << "+" << y << "=";
		cin >> answer;
	
		if (answer == sum)
			cout << "정답입니다.";
		else
			cout << "틀렸습니다.";
	}
	return 0;
}
