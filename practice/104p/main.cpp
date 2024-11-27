#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int list[SIZE];
	int person, max;
	
	for(int& e : list){
		cout << "사과 개수 : ";
		cin >> e;
	}
	person = 0;
	for(int i = 0; i < SIZE; i++){
		if(list[i] > max){
			max = list[i];
			person = i;
		}
	}
	cout << "사람 번호 : " << person << endl; 
	return 0;
}
