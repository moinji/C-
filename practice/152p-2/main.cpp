#include <iostream>
#include <string>
using namespace std;

int main() {
	string list[] = {"ö��", "����", "�浿"};
	
	for(auto& n : list)
		cout << n << "�� �ȳ�!" << endl; 
	return 0;
}
