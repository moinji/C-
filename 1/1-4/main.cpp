#include <iostream>

using namespace std;

int main() {
	int length;
	int width;
	int height;
	
	cout << "���� : ";
	cin >> length;
	cout << "�ʺ� : ";
	cin  >> width;
	cout << "���� : ";
	cin >> height;
	
	int volume = length * width * height;
	int surface = 2 * ((length * width) + (length * height) + (width * height));
	cout << endl << endl << "������ ���� : " << volume << endl << "������ ǥ���� : " << surface << endl; 
	return 0;
}
