#include <stdio.h>

int main()
{
	int num1 = '\0', num2 = '\0';
	scanf_s("%d %d", &num1, &num2);

	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %.f", num1, num2, (float)num1 / num2);
	getch();
}