#include <iostream>
using namespace std;

int main() {
	char str;
	int a, b; 
	cout << "������ ���� : ";
	cin >> str;
	cout << "���ڸ� �Է��Ͻÿ� : "; 
	cin >> a >> b;
	cout << "����� ��� : ";
	switch(str){
		case '+' :
			cout << a + b;
			break; 
		case '-' :
			cout << a- b;
			break;
		case '*' :
			cout << a* b;
			break;
		case '/' :
			cout << a / b;
			break;
		default :
			cout << "�߸� �Է��߽��ϴ�."; 
			break;
	}
	return 0;
}
