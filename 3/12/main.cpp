#include <iostream>
#include <string>
using namespace std;

int main() {
	int counter[256] = {0}; 
	string s;
	cout << "���ڿ��� �Է��Ͻÿ� : ";
	getline(cin, s);
	
	for(int i = 0; i < s.size(); i++){
		counter[s[i]]++;
	}
	
	for(int i = 0; i < 256; i++){
		cout << char(i) << " : " << counter[i] << endl;
	}
	
	return 0;
}
