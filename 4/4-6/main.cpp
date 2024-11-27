#include <iostream>
#include <string>
using namespace std;

class Employee{
	string name;
	int age;
	int salary;
public:
	void setEmployee(string name, int age, int salary);
	void print();
};
void Employee::setEmployee(string name = "", int age = 0, int salary = 0){
	this->name = name;
	this->age = age;
	this-> salary = salary;
}
void Employee::print(){
	cout << name << endl << age << endl << salary << endl;
}
int main() {
	Employee e;
	e.setEmployee("¸ðÀÎÁö", 26, 20231862);
	cout << "Employee1 : " << endl;
	e.print();	
	return 0;
}
