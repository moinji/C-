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
	
	cout << "��ȣ �Է� : "; 
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
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl; 
	
	return 0;
}
