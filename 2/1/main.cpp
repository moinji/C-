#include <iostream>
using namespace std;
int main() {
	string str1, str2;
	cout << "ù ��° ���ڿ� : ";
	getline(cin, str1);
	cout << "�ι�° ���ڿ�: ";
	getline(cin, str2);
	
	if(str1 == str2)
		cout << "2���� ���ڿ��� �����ϴ�.";
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�."; 
	return 0;
}
