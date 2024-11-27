#include <iostream>
#include <string>
using namespace std;

class Employee{
private :
	string name;
	int age;
	int salary;
	int years;
	
public :
	void setname(string newName){
		name = newName;
	}
	void setage(int newAge){
		age = newAge;
	}
	void setsalary(int newSalary){
		salary = newSalary;
	}
	void setyears(int newYears){
		years = newYears;
	}

	string getname(){
		return name;
	}
	int getage(){
		return age;
	}
	int getsalary(){
		return salary;
	}
	int getyears(){
		return years;
	}
};

int main() {
	Employee emp;
	
	emp.setname("ȫ�浿");
	emp.setage(26);
	emp.setsalary(1000000);
	emp.setyears(1);
	
	cout << emp.getname() << " " << emp.getage() << " " << emp.getsalary() << " " << emp.getyears() << endl;
	return 0;
}
