#include <iostream>

using namespace std;

int main() {
	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum;
	
	cout << "�л����� ������ �Է��Ͻÿ�. : ";
	for (int i = 0; i < STUDENTS; i++){
		cin >> scores[i];
		sum += scores[i];
	}
	
	int average = sum / STUDENTS;
	
	cout << "��� : " << average; 	
	
	return 0;
}
