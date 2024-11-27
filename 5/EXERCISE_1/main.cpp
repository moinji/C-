#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	Point();
	Point(int x, int y);
	~Point();
	void Print();
};
Point::Point() : x(0), y(0) {}
Point::Point(int x, int y) : x(x), y(y) {}
Point::~Point(){}
void Point::Print(){
	cout << "x : " << x << ", y : " << y << endl;
}
int main() {
	Point p(100, 200);
	p.Print();
	return 0;
}
