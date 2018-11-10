#include <stdio.h>

int main()
{
	double Yard = 0;
	printf("yard?");
	scanf_s("%lf", &Yard);

	printf("%.1lfyard = %.1lfcm", Yard, Yard * 91.44);
	getch();
}