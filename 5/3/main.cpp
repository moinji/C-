#include <iostream>
using namespace std;

class Box{
private:
	int length;
	int width;
	int height;
public:
	Box():length{0}, width{0}, height{0}{}
	Box(int l, int w, int h):length{l}, width{w}, height{h}{}
	int getLength(){return length;}
	int getWidth(){return width;}
	int getHeight(){return height;}
	
	void empth(){
		if(length*width*height == 0)
			cout << "박스가 비었습니다." << endl; 
	}
	int getVolume(){
		return length*width*height;
	}
	void print(){
		cout << "길이 : " << length << endl 
		<< "너비 : " << width << endl 
		<< "높이 : " << height << endl 
		<< "부피 : " << getVolume() << endl;
	}
};
int main() {
	Box b1;
	Box b2(3, 2, 4);
	b1.print();
	cout << endl;
	b2.print();
	return 0;
}
