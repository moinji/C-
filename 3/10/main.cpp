#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(){
	return (rand() % 2)?0:1;
	
}
int main() {
	srand(time(NULL));
	int i;
	int count[2] = {0};
	
	for(i=0; i<100; i++){
		count[game()]++;
	}
	
	cout << "������ �ո� : " << count[0] << endl;
	cout << "������ �޸� : " << count[1] << endl; 
	return 0;
}
