#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "�ֹι�ȣ �Է� : ";
	cin >> s;
	
	cout << "-�� ���ŵ� �ֹι�ȣ : ";
	for(auto& c : s){
		if(c == '-')
			continue;
		else
			cout << c;
}
	return 0;
}
