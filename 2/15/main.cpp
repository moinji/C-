#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int computer = rand() % 3 + 1;
	int select;
	
	cout << "가위, 바위, 보 중에 하나를 선택하시오(1, 2, 3) : ";
	cin >> select;
	
	if(computer == select)
		cout << "컴퓨터 : " << computer << endl << "비겼습니다." << endl;
	else if((computer == 1 && select == 3) || (computer == 3 && select == 2) || (computer == 2 && select == 1))
		cout << "컴퓨터 : " << computer << endl << "컴퓨터 승!" << endl;
	else
		cout << "컴퓨터 : " << computer << endl << "사용자 승!" << endl;	
	 
	return 0;
}
