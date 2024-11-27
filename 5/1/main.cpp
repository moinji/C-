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
		cout << "책 이름 : " << title << endl << "저자 : " << author; 
	}
};
int main() {
	Book b("Great C++", "Bob");
	b.print();
	return 0;
}
