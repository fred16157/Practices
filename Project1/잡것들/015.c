#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("sum : %d\navg : %d", num1 + num2 + num3, (num1 + num2 + num3) / 3);
	getch();
}