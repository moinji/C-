#include <iostream>
using namespace std; 

int main() {
	int select;
	cout << "1. �ݶ� 2. �� 3. ��������Ʈ 4. �ֽ� 5. Ŀ�� �߿��� �ϳ��� �����ϼ���. : ";
	cin >> select;
	switch(select){
	case 1 :
		cout << "�ݶ�";
		break; 
	case 2 :
		cout << "��";
		break;
	case 3 :
		cout << "��������Ʈ";
		break;
	case 4 :
		cout << "�ֽ�";
		break;
	case 5 :
		cout << "Ŀ��";
		break;
	defalut :
		cout << "�߸�"; 
		break;
	}
	cout << " ������";
	 
	return 0;
}
