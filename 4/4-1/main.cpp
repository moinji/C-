#include <iostream>
using namespace std;

class Person{
	string name;
	int age;
public :
	void setPerson(string name, int age);
	void print();
};

void Person::setPerson(string name, int age){
	this->name = name;
	this->age = age;
}
void Person::print(){
	cout << "이름 : " << name << endl << "나이 : " << age << endl;
}

int main() {
	Person p;
	p.setPerson("모인지", 26);
	p.print();
	return 0;
}
