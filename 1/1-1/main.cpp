#include <iostream>
#include <string>

using namespace std;

int main() {
	string subject;
	string verb;
	string object;
	
	cout << "주어 : "; 
	cin >> subject;
	cout << "동사 : ";
	cin >> verb;
	cout << "목적어 : ";
	cin >> object;
	
	cout << endl;
	cout << subject << " " << verb << " " << object << endl;	 
	
	return 0;
}
