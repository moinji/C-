#include <iostream>
#include <string>
using namespace std; 

class Computer{
	string name;
	int RAM;
	double CPU_speed;

public:
	void setComputer(string name, int RPM, double CPU_speed);
	void print();
};

void Computer::setComputer(string name, int RPM, double CPU_speed){
	this->name = name;
	this->RAM = RAM;
	this->CPU_speed = CPU_speed;
}
void Computer::print(){
	cout << "이름 : " << name << endl;
	cout << "RAM : " << RAM << endl;
	cout << "CPU 속도 : " << CPU_speed << endl;
}
int main() {
	Computer c;
	c.setComputer("오피스컴퓨터", 8, 4.2);
	c.print();
	return 0;
}
