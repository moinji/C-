#include <iostream>
#include <string>
using namespace std;

class Dog{
private:
	string dogname;
	string dogbreed;
	int dogage;
public:
	Dog(string name = "�Ҹ�", int age = 0) : dogname{name}, dogbreed{"�Ҹ�"}, dogage{age}{}
	Dog(string name = "�Ҹ�", string breed = "�Ҹ�", int age = 0) : dogname{name}, dogbreed{breed}, dogage{age}{}
	void print(){
		cout << "������ �̸� : " << dogname << endl << "������ �� : " << dogbreed << endl << "������ ���� : " << dogage << endl; 
	}
};


int main() {
	string name, breed;
	int age;
	
	cout << "������ �̸� : ";
	cin >> name;
	cout << "������ �� : ";
	cin >> breed;
	cout << "������ ���� : ";
	cin >> age;
	
	Dog d(name, breed, age);
	d.print();
	
	return 0;
}
