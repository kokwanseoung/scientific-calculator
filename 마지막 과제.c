#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include <iostream>
using namespace std;
// 편의를 위해 cout, cin 기능을 사용하는 것을 건의합니다. 

int main()

{
	int n1, n2;
	int result;
	char math_sign;
	cout << "	 공학용 계산기 			\n";
	cout << " ------------------------------ \n\n";
	cout << "   +     -      /       *   \n\n";
	cout << "   log   exp    √      ^   \n\n";
	cout << "   !                        \n\n";
	cout << " *******************************\n";
	cout << " 복소수 계산 모드:            \n";
	cout << " ------------------------------ \n";
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
	case '^': // n1 ^ n2 = reslut (제곱)
		result = pow(n1, n2);
		break;
	default:
		cout << "잘못된 수학 부호입니다.";
		break;

	}

	cout << result;


	int a, i = 1, fact = 1;
	printf("Enter a number: ");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
		fact = fact * i;
	printf("The factorial of %d is %d. \n\n", a, fact);


}