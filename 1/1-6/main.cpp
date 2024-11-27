#include <iostream>

using namespace std;

int main() {
	int h;
	int m;
	int s;
	int totals; 
	
	cout << "시 : ";
	cin >> h;
	cout << "분 : ";
	cin >> m;
	cout << "초 : ";
	cin >> s;
	
	totals = (60 * 60 * h) + (60 * m) + s;
	
	cout << "전체 초 : " << totals << endl; 
	return 0;
}
