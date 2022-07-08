#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <iostream>
#include <math.h>
using namespace std;


int main()

{

	int n1, n2, n3;  int result; int i, d; int fact = 1; double n4; int a;
  
	/*cout << "	 공학용 계산기 			\n";
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
	cin >> a;
	cin >> n2;*/

	printf("\n	공학용 계산기	\n\n");
	printf("	일반 계산기		\n");
	printf("------------------------------ \n\n");
	printf("1.+ 2.- 3. * 4. / \n");
	printf("5.log 6.exp 7.√ 8.^ 9.! \n\n");
	printf("------------------------------ \n\n");
	printf("	특수 계산 모드	\n\n");
	printf("------------------------------------------------------------ \n\n");
	printf("10.복소수 계산	11. 행렬 계산	12. 근의 공식 및 판별식	13. 각도 \n");
	printf("------------------------------------------------------------ \n\n");
	printf("실행하실 계산의 번호를 입력해 주세요. : ");
	scanf_s("%d", &a);


	switch (a) {
	case 1:
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n1);
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n2);
		result = n1 + n2;
		printf("%d + %d = %d ", n1, n2, result);
		break;

	case 2:
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n1);
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n2);
		result = n1 - n2;
		printf("%d - %d = %d ", n1, n2, result);
		break;

	case 3:
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n1);
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n2);
		result = n1 * n2;
		printf("%d * %d = %d ", n1, n2, result);
		break;

	case 4:
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n1);
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n2);
		result = n1 / n2;
		printf("%d / %d = %d ", n1, n2, result);
		break;

	case 5:
		//로그계산
		break;

	case 6:
		// 지수계산
		break;

	case 7:
		printf("숫자를 입력하시오: ");
		scanf_s("%lf", &n4);
		printf("입력하신 숫자 %0.3lf 의 제곱근의 값은 %0.3lf입니다.", n4, sqrt(n4));
		break;

	case 8:
		//제곱계산
		break;

	case 9:
		printf("Enter a number: ");
		scanf_s("%d", &n1);
		for (i = 1; i <= n1; i++)
			fact = fact * i;
		printf("입력하신 숫자 %d 의 팩토리얼값은 %d입니다. \n", n1, fact);
		break;

	case 10:
		//복소수 계산
		break;

	case 11:
		//행렬 계산
		break;

	case 12:
		printf("ax^2 + bx + c = 0 꼴의 해를 구하기");
		printf("계수인 a, b, c를 차례로 입력해 주세요.");
		scanf_s("%d %d %d", &n1, &n2, &n3);
		d = n2 * n2 - (4 * n1 * n3);
		printf("판별식 D의 값은 %d입니다.", d);
		if (d > 0)
		{
			double x, y;
			x = (-n2 + (sqrt(n2 * n2 - 4 * n1 * n3))) / (2 * n1);
			y = (-n2 - (sqrt(n2 * n2 - 4 * n1 * n3))) / (2 * n1);
			printf("\n입력하신 식의 2개의 근을 가지고 있고 근은 각각 %0.2f와 %0.2f입니다.\n", x, y);
		}
		if (d == 0)
		{
			double x;
			x = (-n2 + (sqrt(n2 * n2 - 4 * n1 * n3))) / (2 * n1);
			printf("\n입력하신 식은 근이 하나 존재하고 %0.2f가 그 근입니다.\n", x);
		}
		if (d < 0)
		{
			printf("\n입력하신 식은 근이 존재하지 않습니다.\n");
		}
		break;

	case 13:
		//각도
		break;

	default:
		cout << "잘못된 입력입니다.";
		break;


	}

}
