#include <stdio.h>
#include <iostream>
using namespace std;



int main() {
	int n1, n2;
	int result;
	char math_sign;
	cout << "���� ���� UI�� ����غ���� �Ұ� ����\n";
	cin >> n1;
	cin >> math_sign;
	cin >> n2;

	switch (math_sign) {
	case '+': // n1 + n2 = result
		result = n1 + n2;
		break;
	case '-': // n1 - n2 = result
		result = n1 - n2;
		break;
	case '*': // n1 * n2 = result
		result = n1 * n2;
		break;
	case '/': // n1/n2 = result
		result = n1 / n2;
		break;
	default:
		cout << "�߸��� ���� ��ȣ�Դϴ�.";
		break;

	}
	cout << result;
	
}