#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int computer = rand() % 3 + 1;
	int select;
	
	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�(1, 2, 3) : ";
	cin >> select;
	
	if(computer == select)
		cout << "��ǻ�� : " << computer << endl << "�����ϴ�." << endl;
	else if((computer == 1 && select == 3) || (computer == 3 && select == 2) || (computer == 2 && select == 1))
		cout << "��ǻ�� : " << computer << endl << "��ǻ�� ��!" << endl;
	else
		cout << "��ǻ�� : " << computer << endl << "����� ��!" << endl;	
	 
	return 0;
}
