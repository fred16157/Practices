//10���� ������ �Է¹޾� �迭�� ������ �� ������������ �����Ͽ� ����Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=200&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &nums[i]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			if (nums[j] < nums[j + 1])
			{
				int num = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = num;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}