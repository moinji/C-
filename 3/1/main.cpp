#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y, z;
	int solution; 
	cout << "�� ���� ������ �Է��Ͻÿ� : ";
	cin >> x >> y >> z;
	if(x>=y>=z || x>=z>=y)
		solution = x;
	else if(y>=x>=z ||y>=z>=x)
		solution = y;
	else
		solution = z;
	
	cout << "���� ū ������ : " << solution <<endl; 
	return 0;
}
