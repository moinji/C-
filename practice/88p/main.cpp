#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	
	int num = rand() % 100;
	int i = 0;
	int guess; 
	
	do {
		i++;
		cout << "정답을 추측하여 보십시오 : ";
		cin >> guess;

		if (guess > num)
			cout << "제시한 정수가 높습니다." << endl;
		if (guess < num)
			cout << "제시한 정수가 낮습니다." << endl;
		
	}while (guess != num);
	
	cout << "축하합니다. 시도 횟수 : " << i << endl;
	
	return 0;
}
