#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf_s("%d %d", &num1, &num2);
	
	printf("%d\n", num1 == num2 ? 1 : 0);
	printf("%d\n", num1 != num2 ? 1 : 0);

	getch();
}