#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int money = 50;
	int bets = 0;
	int victory = 0; 
	
	cout << "초기 금액 " << money << endl << "목표 금액 $250" << endl;
	
	while((money > 0) && (money < 250) && (bets <= 1000)) {
		bets++;
		if ((double)rand()/RAND_MAX < 0.5){
			money++;
			victory++;
		}
		else
			money--;		
	}
	
	cout << "1000 중의 " <<  victory << "번 승리" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "이긴 확률 : " << (double)victory/10. << endl;
	cout << "평균 배팅 횟수 : " << (double)bets << endl; 
	return 0;
}
