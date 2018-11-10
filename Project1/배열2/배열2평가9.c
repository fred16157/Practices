//행의 크기를 입력받아 파스칼 삼각형을 작성하여 마지막 행부터 첫 번째 행까지 차례로 출력하는 프로그램을 작성하시오. 행의 크기는 최대 10이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=68&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int nums[10][10] = { 0,1 };
	int i;
	int j;
	scanf("%d", &num);

	for(i = 1; i< nums; i++)
	{
		for (j = 1; j <= i; j++)
		{
			nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];
		}
	}

	for (i = num - 1; i >= 0; i--)
	{
		for (j = num - 1; j >= 0; j--)
		{
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	getch();
}