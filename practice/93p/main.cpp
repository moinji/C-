#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	while(true){
		int x = rand() % 100;
		int y = rand() % 100;
		int sum = x + y;
		int answer;
	
		cout << "��� ������ �����մϴ�." << endl;
		cout << x << "+" << y << "=";
		cin >> answer;
	
		if (answer == sum)
			cout << "�����Դϴ�.";
		else
			cout << "Ʋ�Ƚ��ϴ�.";
	}
	return 0;
}
