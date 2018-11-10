//10개의 정수를 입력받아 100 미만의 수 중 가장 큰 수와 100 이상의 수 중 가장 작은 수를 출력하는 프로그램을 작성하시오.
//(입력되는 정수의 범위는 1이상 10, 000 미만이다.만약 해당하는 수가 없을 때에는 100 을 출력한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=198&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int bignum = 10000;
	int smallnum = 0;

	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &nums[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (nums[i] < 100)
		{
			if (nums[i] > smallnum)
			{
				bignum = nums[i];
			}
		}
		else if (nums[i] >= 100)
		{
			if (nums[i] < bignum)
			{
				bignum = nums[i];
			}
		}
	}
	printf("%d %d", smallnum, bignum);
	getch();
}
