#include <iostream>
#include <string>
using namespace std;
class Airplane{
private:
	int planenumber;
	string name;
	int capacity;
	int speed;

public:
	
	Airplane() : planenumber(0), name("unknown"), capacity(0), speed(0){}
	
	Airplane(int p, string n, int c, int s) : planenumber(p), name(n), capacity(c), speed(s){}
	
	void setPlanenumber(int p){
		planenumber = p;
	}
	void setName(string n){
		name = n;
	}
	void setCapacity(int c){
		capacity = c;
	}
	void setSpeed(int s){
		speed  = s;
	}
	int getPlanenumber(){
		return planenumber;
	}
	string getName(){
		return name;
	}
	int getCapacity(){
		return capacity;
	}
	int getSpeed(){
		return speed;
	}
	
	void print(){
	cout << "비행기 #" << planenumber << endl;
	cout << "비행기의 이름 : " << name << endl;
	cout << "비행기의 용량 : " << capacity << endl;
	cout << "비행기의 속도 : " << speed << "Km/h" << endl << endl; 
	}
};
int main() {
	Airplane plane1(1, "보잉 787", 900, 300);
	Airplane plane2(2, "에어버스 350", 400, 1000);
	
	plane1.print(); 
	plane2.print(); 
	 
	
	return 0;
}
