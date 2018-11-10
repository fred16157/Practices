//학생들의 점수를 입력을 받다가 0이 입력되면 그 때까지 입력받은 점수를 10점 단위로 구분하여 점수대별 학생 수를 출력하는 프로그램을 작성하시오. (1명도 없는 점수는 출력하지 않는다.)학생은 최대 100명이하이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=61&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int counts[10] = { 0, };
	int i;

	for (i = 0; i < 100; i++)
	{
		int num;
		scanf("%d ", &num);
		if (num == 0)
		{
			break;
		}
		counts[num / 10 - 1]++;
	}

	for (i = 9; i >= 0; i--)
	{
		if (counts[i] != 0)
		{
			printf("%d : %d person\n", (i + 1) * 10, counts[i]);
		}
	}
	getch();
}