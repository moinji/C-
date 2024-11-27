#include <iostream>
#include <string>
using namespace std;

class Dog{
private:
	string dogname;
	string dogbreed;
	int dogage;
public:
	Dog(string name = "불명", int age = 0) : dogname{name}, dogbreed{"불명"}, dogage{age}{}
	Dog(string name = "불명", string breed = "불명", int age = 0) : dogname{name}, dogbreed{breed}, dogage{age}{}
	void print(){
		cout << "강아지 이름 : " << dogname << endl << "강아지 종 : " << dogbreed << endl << "강아지 나이 : " << dogage << endl; 
	}
};


int main() {
	string name, breed;
	int age;
	
	cout << "강아지 이름 : ";
	cin >> name;
	cout << "강아지 종 : ";
	cin >> breed;
	cout << "강아지 나이 : ";
	cin >> age;
	
	Dog d(name, breed, age);
	d.print();
	
	return 0;
}
