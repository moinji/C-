#include <iostream>
using namespace std;
int main() {
	string str1, str2;
	cout << "첫 번째 문자열 : ";
	getline(cin, str1);
	cout << "두번째 문자열: ";
	getline(cin, str2);
	
	if(str1 == str2)
		cout << "2개의 문자열은 같습니다.";
	else
		cout << "2개의 문자열은 다릅니다."; 
	return 0;
}
