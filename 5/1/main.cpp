#include <iostream>
#include <string>
using namespace std;

class Book{
	string title;
	string author;
public:
	Book(string t, string a){
		title = t;
		author = a;
	}
	string getAuthor(){
		return author;
	}
	void print(){
		cout << "å �̸� : " << title << endl << "���� : " << author; 
	}
};
int main() {
	Book b("Great C++", "Bob");
	b.print();
	return 0;
}
