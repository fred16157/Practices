//���� ũ�⸦ �Է¹޾� �Ľ�Į �ﰢ���� �ۼ��Ͽ� ������ ����� ù ��° ����� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ũ��� �ִ� 10�̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=68&sca=10a0

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