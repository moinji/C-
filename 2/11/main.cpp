#include <iostream>
using namespace std;

int main() {
	int i, n;
	int sum = 0;
	cout << "n의 값을 입력하시오 : ";
	cin >> n; 
	for(i = 1; i <= n; i++){
		sum = sum + i * i;
	}
	cout << "계산값은 " << sum << "입니다." << endl; 
	return 0;
}
