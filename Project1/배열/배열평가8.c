//100 �� ������ ������ �Է¹޴ٰ� 0 �� �ԷµǸ� �� ������ �Էµ� ���� �� 5�� ����� ������ �հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//����� �Ҽ��� ���� 1�ڸ����� ����Ѵ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=57&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100];
	int multi5 = 0;
	int sum = 0;
	int i;
	int j;
	for (i = 0; i < 100; i++)
	{
		scanf("%d ", &nums[i]);
		if (nums[i] == 0)
		{
			break;
		}
	}

	for (j = 0; j < i; j++)
	{
		if (nums[j] % 5 == 0)
		{
			multi5++;
			sum += nums[j];
		}
	}

	printf("Multiples of 5 : %d\nsum : %d\navg : %.1f", multi5, sum, (float)sum / multi5);
	getch();
}