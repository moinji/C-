#include <iostream>
using namespace std;

int main() {
	int width;
	const int height = 9;
	cout << "구구단 몇 단까지? : ";
	cin >> width;
	int list[height][width];
	
	for(int i = 0; i < width; i++){
		for(int j = 0; j < height; j++){
			list[i][j] = (i + 1) * (j + 1);
			cout << list[i][j] << ", ";
		}
		cout << endl;
	}
	return 0;
}
