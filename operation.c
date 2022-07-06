#include <stdio.h>
#include <iostream>
using namespace std;



int main() {
	int n1, n2;
	int result;
	char math_sign;
	cout << "대충 계산기 UI와 계산해보라는 소개 문구\n";
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
		cout << "잘못된 수학 부호입니다.";
		break;

	}
	cout << result;
	
}