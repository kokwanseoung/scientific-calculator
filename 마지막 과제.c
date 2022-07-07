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

	int a, i = 1, fact = 1;
	double b;
	printf("Enter a number: ");
	scanf_s("%lf", &b);
	printf("입력한 %0.3lf의 제곱근은 %0.3lf이다.", b, sqrt(b));


}