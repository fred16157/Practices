#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%d %d", num1 > num2 && num1 > num3 ? 1 : 0, num1 == num2 == num3 ? 1 : 0);
	getch();
}