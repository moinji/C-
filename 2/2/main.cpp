#include <iostream>
using namespace std; 

int main() {
	int select;
	cout << "1. 콜라 2. 물 3. 스프라이트 4. 주스 5. 커피 중에서 하나를 선택하세요. : ";
	cin >> select;
	switch(select){
	case 1 :
		cout << "콜라";
		break; 
	case 2 :
		cout << "물";
		break;
	case 3 :
		cout << "스프라이트";
		break;
	case 4 :
		cout << "주스";
		break;
	case 5 :
		cout << "커피";
		break;
	defalut :
		cout << "잘못"; 
		break;
	}
	cout << " 선택함";
	 
	return 0;
}
