#include <iostream>
using namespace std;

class cube{
private:
	double side; //정육면체의 한 변
public:
	double getSide(){
		return side;
	}
	double getVolume(){
		return side*side*side;
	}
	cube():side{0}{}
	cube(double s):side{s}{}
};
int main() {
	return 0;
}
