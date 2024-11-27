#include <iostream>
using namespace std;

class Circle{
public:
	int radius;
	
	double circleArea(){
		return radius * radius * 3.14;
	}
};

int main() {
	Circle c;
	
	c.radius = 10;
	
	cout << c.circleArea() << endl;
	
	return 0;
}
