#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int money = 50;
	int bets = 0;
	int victory = 0; 
	
	cout << "�ʱ� �ݾ� " << money << endl << "��ǥ �ݾ� $250" << endl;
	
	while((money > 0) && (money < 250) && (bets <= 1000)) {
		bets++;
		if ((double)rand()/RAND_MAX < 0.5){
			money++;
			victory++;
		}
		else
			money--;		
	}
	
	cout << "1000 ���� " <<  victory << "�� �¸�" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "�̱� Ȯ�� : " << (double)victory/10. << endl;
	cout << "��� ���� Ƚ�� : " << (double)bets << endl; 
	return 0;
}
