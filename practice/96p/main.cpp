#include <iostream>

using namespace std;

int main() {
	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum;
	
	cout << "학생들의 점수를 입력하시오. : ";
	for (int i = 0; i < STUDENTS; i++){
		cin >> scores[i];
		sum += scores[i];
	}
	
	int average = sum / STUDENTS;
	
	cout << "평균 : " << average; 	
	
	return 0;
}
