#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <iostream>
#include <math.h>
using namespace std;
typedef struct Complex { double real; double imagin; }; Complex;

int main(void)

{
	int n1, n2, n3;  int result; int i, j, d; int fact = 1; double n4; int a;
	int arr1[3][3]; int arr2[3][3]; int sum_arr[3][3]; int min_arr[3][3]; int multi_arr[3][3];

	printf("\n	공학용 계산기	\n\n");
	printf("	일반 계산기		\n");
	printf("------------------------------ \n\n");
	printf("1.+ 2.- 3. * 4. / \n");
	printf("5.log 6.exp 7.√ 8.^ 9.! \n\n");
	printf("------------------------------ \n\n");
	printf("	특수 계산 모드	\n\n");
	printf("------------------------------------------------------------ \n\n");
	printf("10.복소수 계산	11. 행렬 계산	12. 근의 공식 및 판별식	13. 각도 \n");
	printf("0. 종료 \n");
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
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n3);
		result = log10(n3);
		printf("log10 %d = %d ", n3, result);
		break;

	case 6:
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n3);
		result = exp(n3);
		printf("exp(%d) = %d ", n3, result);
		break;

	case 7:
		printf("숫자를 입력하시오: ");
		scanf_s("%lf", &n4);
		printf("입력하신 숫자 %0.3lf 의 제곱근의 값은 %0.3lf입니다.", n4, sqrt(n4));
		break;

	case 8:
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n1);
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n2);
		printf("입력하신 숫자 %d ^ %d 제곱의 값은 %0.1lf입니다.", n1, n2, pow(n1, n2));
		break;

	case 9:
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &n1);
		for (i = 1; i <= n1; i++)
			fact = fact * i;
		printf("입력하신 숫자 %d 의 팩토리얼값은 %d입니다. \n", n1, fact);
		break;

	case 10:
		Complex a1;
		printf("첫번째 복소수 입력하기[실수 허수 순으로]: ");
		scanf_s("%lf %lf", &a1.real, &a1.imagin);

		Complex a2;
		printf("두번째 복소수 입력하기[실수 허수 순으로]: ");
		scanf_s("%lf %lf", &a2.real, &a2.imagin);

		Complex plus;
		plus.real = a1.real + a2.real;
		plus.imagin = a1.imagin + a2.imagin;

		Complex minuse;
		minuse.real = a1.real - a2.real;
		minuse.imagin = a1.imagin - a2.imagin;

		Complex multi;
		multi.real = (a1.real * a2.real) - (a1.imagin * a2.imagin);
		multi.imagin = (a1.real * a2.real) + (a1.imagin * a2.imagin);

		printf("입력받은 두 복소수의 합은 실수부분 : %0.2lf , 허수부분 : %0.2lf입니다.\n", plus.real, plus.imagin);
		printf("입력받은 두 복소수의 차는 실수부분 : %0.2lf , 허수부분 : %0.2lf입니다.\n", minuse.real, minuse.imagin);
		printf("입력받은 두 복소수의 곱은 실수부분 : %0.2lf , 허수부분 : %0.2lf입니다.\n", multi.real, multi.imagin);

		break;

	case 11:
		printf("첫번째 행렬의 원소를 차례대로 입력하시오.: ");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{

				scanf_s("%d", &arr1[i][j]);
			}
		}
		printf("두번째 행렬의 원소를 차례대로 입력하시오.: ");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++) {

				scanf_s("%d", &arr2[i][j]);
			}

		}
		printf("\n첫번째 행렬: \n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%2d ", arr1[i][j]);
			}
		}

		printf("\n두번째 행렬: \n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%2d ", arr2[i][j]);
			}
		}
		printf("\n\n입력하신 두 행렬의 합.\n\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				sum_arr[i][j] = arr1[i][j] + arr2[i][j];
				printf("%2d ", sum_arr[i][j]);
			}
		}


		printf("\n\n입력하신 두 행렬의 차.\n\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				min_arr[i][j] = arr1[i][j] - arr2[i][j];
				printf("%2d ", min_arr[i][j]);
			}
		}

		printf("\n\n입력하신 두 행렬의 곱.\n\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				multi_arr[i][j] = arr1[i][j] * arr2[i][j];
				printf("%2d ", multi_arr[i][j]);
			}
		}
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
		printf("각도(0~360°)를 숫자만 입력해 주세요.: ");
		scanf_s("%lf", &n4);
		printf("sin %lf= %0.3lf\ncos %lf = %0.3lf\ntan %lf = %0.3lf\n", n4, sin(n4), n4, cos(n4), n4, tan(n4));
		break;

	case 0:
		printf("공학용 계산기를 종료합니다.");
		return 0;
    
	default:
		cout << "잘못된 입력입니다.";
		break;


	}

}
