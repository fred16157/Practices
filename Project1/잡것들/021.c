#include <stdio.h>

//°öÀº OR ÇÕÀº AND

int main()
{
	int num1 = 0, num2 = 0;
	scanf_s("%d %d", &num1, &num2);
	printf("%d %d", num1 || num2, num1 && num2);
	getch();
}