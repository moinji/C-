#include <iostream>
using namespace std;

class Circle{
public:
	int r;
	double circleArea();
};

double Circle::circleArea() {
	return r*r*3.14;
}

int main() {
	Circle c;
	c.r = 100;
	cout << c.circleArea() << endl;
	return 0;
}
