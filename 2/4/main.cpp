#include <iostream>
using namespace std;

int main() {
	int num;
	bool n = 0;
	for(int i = 0; i < 5; i++){
		cout << "���� �Է� : ";
		cin >> num;
		if (num == 5)
			n = true;
	}
	if (n == 0)
		cout << "����� ��";
	else
		cout << "��ǻ�� ��"; 
	return 0;
}
