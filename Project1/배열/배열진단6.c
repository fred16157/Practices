//10���� ������ �Է¹޾� �� �� ���� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(�Է¹��� ������ 1000�� ���� �ʴ´�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=197&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int min = 1000;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &nums[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (nums[i] <= min)
		{
			min = nums[i];
		}
	}
	printf("%d", min);
	getch();
}