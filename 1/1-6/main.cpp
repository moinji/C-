#include <iostream>

using namespace std;

int main() {
	int h;
	int m;
	int s;
	int totals; 
	
	cout << "�� : ";
	cin >> h;
	cout << "�� : ";
	cin >> m;
	cout << "�� : ";
	cin >> s;
	
	totals = (60 * 60 * h) + (60 * m) + s;
	
	cout << "��ü �� : " << totals << endl; 
	return 0;
}
