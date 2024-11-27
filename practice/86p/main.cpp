#include <iostream>

using namespace std;

int main() {
	char ch;
	int vowel = 0;
	int consonant = 0;
	
	cout << "영문자를 입력하고 콘트롤-Z를 치세요." << endl;
	while(cin >> ch){
		switch (ch){
			case 'a': case 'i': case 'e': case 'o': case 'u':
				vowel++;
				break;
			default:
				consonant++;
				break;
		}
	}
	cout << "모음 : " << vowel << endl << "자음 : " << consonant << endl; 
	 
	return 0;
}
