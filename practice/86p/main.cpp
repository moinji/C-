#include <iostream>

using namespace std;

int main() {
	char ch;
	int vowel = 0;
	int consonant = 0;
	
	cout << "�����ڸ� �Է��ϰ� ��Ʈ��-Z�� ġ����." << endl;
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
	cout << "���� : " << vowel << endl << "���� : " << consonant << endl; 
	 
	return 0;
}
