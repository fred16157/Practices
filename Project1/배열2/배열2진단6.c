//5명 학생의 국어 영어 수학 과학 4과목의 점수를 입력 받아서 각 개인별로 평균이 80 이상이면“합격” 그렇지 않으면“불합격”을 출력하고 합격한 사람의 수를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=206&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int scores[5][4];
	int i;
	int j;
	int result = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d ", &scores[i][j]);
		}
	}

	for (i = 0; i < 5; i++)
	{
		int sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += scores[i][j];
		}
		printf("%s\n", sum / 4 >= 80 ? "pass" : "fail");
		if (sum / 4 >= 80)
		{
			result++;
		}
	}
	printf("Successful : %d", result);
	getch();
}