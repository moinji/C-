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
		cout << "�ܾ� : " << balance << endl;
	}
	
	void withdraw(int j = 0){
		if (balance >= j){
			balance -= j;
			cout << "�ܾ� : " << balance << endl;
		}
		else
			cout << "�ܾ��� �����մϴ�. �ܾ� : " << balance << endl; 
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
		cout << "�Ա� or ��� or ��(q) : ";
		cin >>  act;
		if(act == "�Ա�"){
			cout << "�Ա� �ݾ� : ";
			cin >> da;
			BA.deposit(da);
		}
		else if(act == "���"){
			cout << "��� �ݾ� : ";
			cin >> wa;
			BA.withdraw(wa);		 
		}
		else if(act == "q")
			cout << "ATM ����.";
		else
			cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���."; 
	}
	return 0;
}
