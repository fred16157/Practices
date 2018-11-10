#include <stdio.h>

int main()
{
	int Height = '\0';
	printf("height = ");
	scanf_s("%d", &Height);

	printf("Your height is %dcm.", Height);
	getch();
}
