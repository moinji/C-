#include <iostream>
using namespace std;

int main() {
	char str;
	int a, b; 
	cout << "연산의 종류 : ";
	cin >> str;
	cout << "숫자를 입력하시오 : "; 
	cin >> a >> b;
	cout << "계산의 결과 : ";
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
			cout << "잘못 입력했습니다."; 
			break;
	}
	return 0;
}
