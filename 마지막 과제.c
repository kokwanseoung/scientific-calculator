#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()

{
	int a, i = 1, fact = 1;
	printf("Enter a number: ");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
		fact = fact * i;
	printf("The factorial of %d is %d. \n\n", a, fact);
}