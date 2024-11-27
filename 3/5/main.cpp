#include <iostream>
using namespace std;

void sayHello(int n = 1){
	if(n==1)
		cout << "sayHello()->Hello" << endl; 
	else{
		cout << "sayHello(" << n << ")->";
		for(int i=0; i<n; i++)
		cout << "Hello ";
	}
}

int main() {
	sayHello();
	sayHello(3);
	cout << endl;
	return 0;
}
