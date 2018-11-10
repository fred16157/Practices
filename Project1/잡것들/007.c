#include <stdio.h>

int main()
{
	float Yard = 2.1;
	float Inch = 10.5;

	printf("%5.1fyd = %5.1fcm\n%5.1fin = %5.1fcm", Yard, Yard * 91.44, Inch, Inch * 2.54);
	getch();
}