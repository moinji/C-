#include <iostream>

using namespace std; 

int main() {
	int q1, q2, q3, m, f;
	
	cout << "퀴즈 #1 성적 : ";
	cin >> q1;
	cout << "퀴즈 #2 성적 : ";
	cin >> q2; 
	cout << "퀴즈 #3 성적 : ";
	cin >> q3; 
	cout << "중간고사 성적 : ";
	cin >> m; 
	cout << "기말고시 성적 : ";
	cin >> f;
	cout << "===================" << endl << "성적 총합 : " << q1 + q2 + q3 + m + f << endl << "===================" << endl; 
	
	return 0;
}
