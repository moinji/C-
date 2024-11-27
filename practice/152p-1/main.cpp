#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "주민번호 입력 : ";
	cin >> s;
	
	cout << "-가 제거된 주민번호 : ";
	for(auto& c : s){
		if(c == '-')
			continue;
		else
			cout << c;
}
	return 0;
}
