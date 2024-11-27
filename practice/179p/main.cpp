#include <iostream>
using namespace std;

class Circle{
public:
	int radius;
	
	double circleArea(){
		return radius*radius*3.14;
	}
};

int main() {
	Circle a1, a2;
	a1.radius = 100;
	a2.radius = 200;
	cout << a1.circleArea() << endl;
	cout << a2.circleArea() << endl;
	return 0;
}
