#include <iostream>
#include <string>
using namespace std;

class Movie{
	string title;
	string director;
	double rating;
public:
	Movie() : title{"불명"}, director{"불명"}, rating{0}{}
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
	cout << "영화 제목 : " << title << endl
	<< "영화 감독 : " << director << endl
	<< "영화 평점 : " << rating << endl; 
}

int main() {
	Movie m1("타이타닉", "제임스 카메론", 9.5);
	Movie m2("지오스톰", "딘 데블린", 8.34);

	cout << "영화 #1" << endl;
	m1.print();
	cout << endl << "영화 #2" << endl;
	m2.print();
	return 0;
}
