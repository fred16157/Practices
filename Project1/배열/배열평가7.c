//�� �ڸ� ������ ������ ���ʷ� �Է� �޴ٰ� 999�� �ԷµǸ� ���α׷��� �����ϰ� �� ������ �Էµ� �ִ밪�� �ּҰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.�Է¹޴� ������ 100�� �����̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=56&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100];
	int min = 999;
	int max = 0;
	int i;
	int j;
	for (i = 0; i < 100; i++)
	{
		int num;
		scanf("%d", &num);
		if (num == 999)
		{
			break;
		}
		nums[i] = num;
	}

	for (j = 0; j < i; j++)
	{
		if (nums[j] <= min)
		{
			min = nums[j];
		}
		if (nums[j] >= max)
		{
			max = nums[j];
		}
	}
	printf("max : %d\nmin : %d", max, min);
	getch();
}