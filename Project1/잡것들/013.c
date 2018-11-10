#include <stdio.h>

int main()
{
	int nums[3];
	for (int i = 0; i < 3;  i++)
	{
		scanf_s("%d", &nums[i]);
	}
	printf("sum = %d\navg = %d\n", nums[0] + nums[1] + nums[2], (nums[0] + nums[1] + nums[2]) / 3);
	getch();
}