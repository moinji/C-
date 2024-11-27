#include <iostream>
#include <string>
using namespace std;

int main() {
	string list[] = {"Ã¶¼ö", "¿µÈñ", "±æµ¿"};
	
	for(auto& n : list)
		cout << n << "¾ß ¾È³ç!" << endl; 
	return 0;
}
