#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <iostream>
using namespace std;
// 편의를 위해 cout, cin 기능을 사용하는 것을 건의합니다. 

int main()

{
	double n1, n2;
	double result;

	int n1, n2;
	int result;
	int i, fact = 0;
	double n3;

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

	result = 0;

	switch (math_sign) {
	case '+':
		break;
	case '-':
		result = n1 - n2;
		break;
	case '*':
		result = n1 * n2;
		break;
	case '/':
		result = n1 / n2;
		break;
	case '^':
		result = pow(n1, n2);
		break;

		/*	case 'log':
		result = log10(n1);
		break;
	case 'exp':
		result = exp(n1);
		break;*/ //에러


	case '!':
		printf("Enter a number: ");
		scanf_s("%d", &n1);
		for (i = 1; i <= n1; i++)
			fact = fact * i;
		printf("The factorial of %d is %d. \n\n", n1, fact);
		break;

	case '√':
		printf("Enter number: ");
		scanf_s("%lf", &n3);
		printf("The sqrt of %0.3lf is %0.3lf", n3, sqrt(n3));
		break;



	default:
		cout << "잘못된 입력입니다.";
		break;
		main();

	}

	cout << result;




	int a, i = 1, fact = 1;
	double b;
	printf("Enter a number: ");
	scanf_s("%lf", &b);
	printf("입력한 %0.3lf의 제곱근은 %0.3lf이다.", b, sqrt(b));


}