#include <iostream>
#include <string>
using namespace std;

class Movie{
	string title;
	string director;
	double rating;
public:
	Movie() : title{"�Ҹ�"}, director{"�Ҹ�"}, rating{0}{}
	Movie(string t, string d, double r) : title{t}, director{d}, rating{r}{}
	
	string getTitle() { return title; }
	string getdirector() { return director; }
	double getRating() { return rating; }
	
	void setTitle(string t) { title = t; }
	void setdirector(string d) { director = d;}
	void setRating(double r) { rating = r;}
	
	void print();
};

void Movie::print(){
	cout << "��ȭ ���� : " << title << endl
	<< "��ȭ ���� : " << director << endl
	<< "��ȭ ���� : " << rating << endl; 
}

int main() {
	Movie m1("Ÿ��Ÿ��", "���ӽ� ī�޷�", 9.5);
	Movie m2("��������", "�� ����", 8.34);

	cout << "��ȭ #1" << endl;
	m1.print();
	cout << endl << "��ȭ #2" << endl;
	m2.print();
	return 0;
}
