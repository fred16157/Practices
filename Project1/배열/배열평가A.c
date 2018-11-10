//20 이하의 정수 n을 입력받고 n명의 점수를 입력받아 높은 점수부터 차례로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=59&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[20];
	int limit;
	int i;
	int j;
	scanf("%d ", &limit);

	for (i = 0; i < limit; i++)
	{
		scanf("%d ", &nums[i]);
	}

	for (i = 0; i < limit; i++)
	{
		for (j = 0; j < limit - i; j++)
		{
			if (nums[j] < nums[j + 1])
			{
				int num = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = num;
			}
		}
	}
	for (i = 0; i < limit; i++)
	{
		printf("%d\n", nums[i]);
	}
	getch();
}