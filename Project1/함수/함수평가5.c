//3�� �л��� 3���� ������ �Է¹޾� �� ����  �л��� ������ ����ϴ� ����ȭ�� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=74&sca=10b0

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