#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	printf("%d\n", num++);
	printf("%d\n", ++num);
	getch();
}