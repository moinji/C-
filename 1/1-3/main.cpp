#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int side1;
	int side2;

	cout << "ù ��° �� : "; 
	cin >> side1;
	cout << endl; 
	cout << "�� ��° �� : "; 
	cin >> side2;
	cout << endl << endl; 
	
	int sum = ((side1*side1)+(side2*side2));
	int hypo = sqrt(sum);
	
	cout << "���� ���� : " << hypo << endl;
	
	return 0;
}
