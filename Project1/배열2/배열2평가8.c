//4행 2열의 배열을 입력받아 가로평균과 세로평균 그리고 전체평균을 출력하는 프로그램을 작성하시오. (소수점 이하는 버림 한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=67&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[4][2];
	int i;
	int j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &nums[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		int sum = 0;
		for (j = 0; j < 2; j++)
		{
			sum += nums[i][j];
		}
		printf("%d ", sum / 4);
	}
	
	printf("\n");

	for (i = 0; i < 2; i++)
	{
		int sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += nums[j][i];
		}
		printf("%d ", sum / 4);
	}

	printf("\n");

	int sum = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sum += nums[i][j];
		}
	}
	printf("%d ", sum / 8);
	getch();
}