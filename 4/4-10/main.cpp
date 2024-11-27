#include <iostream>
#include <string>
using namespace std;
class BankAccount{
	string number;
	int balance;
public:
	void init(string, int);
	void deposit(int amount);
	void withdraw(int amount);
};
void BankAccount::init(string number, int balance){
	this->number = number;
	this->balance = balance;
	cout << "ÇöÀç ÀÜ¾× : " << balance << endl;
}

void BankAccount::deposit(int amount){
	balance += amount;
	cout  << "after withdraw(" << amount << ") ÇöÀç ÀÜ¾× : " << balance << endl; 
}
void BankAccount::withdraw(int amount){
	balance -= amount;
	cout  << "after deposit(" << amount << ") ÇöÀç ÀÜ¾× : " <<  balance << endl; 
}

int main() {
	int amount = 1000000;
	
	BankAccount b;
	b.init("3333063008451", 1000000);
	b.deposit(amount);
	b.withdraw(amount);
	
	return 0;
}
