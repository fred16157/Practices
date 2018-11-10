//3명 학생의 3과목 점수를 입력받아 각 과목별  학생별 총점을 출력하는 구조화된 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=74&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintSum(int *scores[][3])
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d %d %d %d", *scores[i][0], *scores[i][1], *scores[i][2],
			*scores[i][0] + *scores[i][1] + *scores[i][2]);
	}
}

int main()
{
	int scores[3][3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
	}

	PrintSum(scores);
	getch();
}