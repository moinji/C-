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
		cout << "������ �����Ͽ� ���ʽÿ� : ";
		cin >> guess;

		if (guess > num)
			cout << "������ ������ �����ϴ�." << endl;
		if (guess < num)
			cout << "������ ������ �����ϴ�." << endl;
		
	}while (guess != num);
	
	cout << "�����մϴ�. �õ� Ƚ�� : " << i << endl;
	
	return 0;
}
