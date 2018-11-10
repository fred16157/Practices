//호석이네 학교는 6학년이 네 반이 있는데 각 반의 대표를 세 명씩 선발하여 제기차기 시합을 하였다. 반별로 세 명이 제기를 찬 개수를 입력받아 각 반별로 제기를 찬 개수의 합계를 출력하는 프로그램을 작성하시오.(반드시 배열을 이용하고 입력후에 출력하는 방식으로 하세요.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=64&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[4][3];
	int i;
	int j;
	for (i = 0; i < 4; i++)
	{
		printf("%dclass? ", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &nums[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		printf("%dclass : ", i + 1);
		int sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum += nums[i][j];
		}
		printf("%d\n", sum);
	}
	getch();
}