//20 ������ ���� n�� �Է¹ް� n���� ������ �Է¹޾� ���� �������� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=59&sca=1090

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