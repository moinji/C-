#include <iostream>
using namespace std;

class Sum{
	int n1, n2;
public:
	void init(int x, int y);
	int add();
};
void Sum::init(int x, int y){
	n1 = x;
	n2 = y;
}
int Sum::add(){
	return n1+n2;
}
int main() {
	Sum s;
	int num1, num2;
	cout << "첫 번째 정수 : ";
	cin >>  num1;
	cout << "두 번째 정수 : ";
	cin >> num2;
	s.init(num1,num2);
	cout << "연산 결과 : " << s.add() << endl; 
	return 0;
}
