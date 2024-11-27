#include <iostream>
#include <string>
using namespace std;

int main() {
	string c;
	bool chk_num, chk_upp, chk_low;
	int i;
	
	chk_num = false;
	chk_upp = false;
	chk_low = false;
	
	cout << "암호 입력 : "; 
	getline(cin, c);
	
	for(i = 0; i < c.size(); i++){
		if (c[i] >= '0' && c[i] <= '9')
			chk_num = true;
		if(c[i] >= 'A' && c[i] <= 'Z')
			chk_upp = true;
		if(c[i] >= 'a' && c[i] <= 'z')
			chk_low = true;
	}
	
	if (chk_num && chk_upp && chk_low)
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl; 
	
	return 0;
}
