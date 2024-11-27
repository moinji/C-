#include <iostream>

using namespace std;

int main() {
	int length;
	int width;
	int height;
	
	cout << "길이 : ";
	cin >> length;
	cout << "너비 : ";
	cin  >> width;
	cout << "높이 : ";
	cin >> height;
	
	int volume = length * width * height;
	int surface = 2 * ((length * width) + (length * height) + (width * height));
	cout << endl << endl << "상자의 부피 : " << volume << endl << "상자의 표면적 : " << surface << endl; 
	return 0;
}
