#include <iostream>
using namespace std;
int main(){
	char board[3][3];
	int x, y, k, i;
	
	for(x = 0; x < 3; x++)
		for(y = 0; y < 3; y++)
			board[x][y] = ' ';
			
	for(k = 0; k < 9; k++){
		cout << "(x, y) ��ǥ : ";
		cin >> x >> y;
		board[x][y] = k % 2 ? 'X' : 'O';
		for(i = 0; i < 3; i++){
			cout << "---|---|---" << endl;
			cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
		}
	}
	return 0;
}
