#include <stdio.h>

int main()
{
	float num1 = '\0', num2 = '\0';
	double num3 = '\0';

	scanf_s("%f %f %lf", &num1, &num2, &num3);
	printf("%.3f\n%.3f\n%.3lf\n", num1, num2, num3);
	getch();
}