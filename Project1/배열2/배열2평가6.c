//������ ���� ������ �迭�� ������ �� 1���� 1���� 3�� 5���� ���� 1�� �ʱ�ȭ�ϰ� �������� ��� 0���� �ʱ�ȭ �� �� 2����ʹ� �ٷ� ������ ���ʰ� �������� ���� ���Ͽ� ä�� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=65&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[5][5] = { {1,0,1,0,1},{0,},{0,},{0,},{0,} };

	int i;
	int j;

	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j + 1];
		}
	}

	for(i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	getch();
}