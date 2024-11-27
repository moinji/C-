#include <iostream>
using namespace std;

class Complex
{
	double r; //�Ǽ��� 
	double i; //����� 
public:
	Complex() : r{0}, i{0){}
	Complex(double _r, double _i) : r{_r}, i{_i}{}
	void print();
	void add();
};
void Complex::print(){
	cout << r << " + " << i << endl;
}
void Complex::add(Complex a, Complex b){
	Complex result;
	result.r = a.r + b.r; //�Ǽ��� ����
	result.i = a.i + b.i; //����� ����
	return result; 
}

int main() {
	return 0;
}
