#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
	int balance;
	double rate;
public:
	BankAccount(int b = 0, double r = 5.0) : balance{b}, rate{r} {}
	void deposit(int i = 0){
		balance += i;
		cout << "잔액 : " << balance << endl;
	}
	
	void withdraw(int j = 0){
		if (balance >= j){
			balance -= j;
			cout << "잔액 : " << balance << endl;
		}
		else
			cout << "잔액이 부족합니다. 잔액 : " << balance << endl; 
	}
};


int main() {
	string act;
	int da = 0;
	int wa = 0;
	int b = 0;
	int r = 0;
	
	BankAccount BA;
	
	while(act != "q"){
		cout << "입금 or 출금 or 끝(q) : ";
		cin >>  act;
		if(act == "입금"){
			cout << "입금 금액 : ";
			cin >> da;
			BA.deposit(da);
		}
		else if(act == "출금"){
			cout << "출금 금액 : ";
			cin >> wa;
			BA.withdraw(wa);		 
		}
		else if(act == "q")
			cout << "ATM 종료.";
		else
			cout << "잘못 입력하셨습니다. 다시 입력하세요."; 
	}
	return 0;
}
