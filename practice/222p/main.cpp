#include <iostream>
using namespace std;
class Time{
public:
	int hour;
	int miniute;
	Time(){
		hour = 0;
		miniute = 0;
	}
	Time(int h, int m){
		hour = h;
		miniute = m;
	}
	void print(){
		cout << hour << " : " << miniute << endl;
	}
};
int main(){
	Time a;
	Time b{10, 25};
	a.print();
	b.print();	
	return 0;
}
