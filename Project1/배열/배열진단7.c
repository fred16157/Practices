//10���� ������ �Է¹޾� 100 �̸��� �� �� ���� ū ���� 100 �̻��� �� �� ���� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(�ԷµǴ� ������ ������ 1�̻� 10, 000 �̸��̴�.���� �ش��ϴ� ���� ���� ������ 100 �� ����Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=198&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int bignum = 10000;
	int smallnum = 0;

	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &nums[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (nums[i] < 100)
		{
			if (nums[i] > smallnum)
			{
				bignum = nums[i];
			}
		}
		else if (nums[i] >= 100)
		{
			if (nums[i] < bignum)
			{
				bignum = nums[i];
			}
		}
	}
	printf("%d %d", smallnum, bignum);
	getch();
}
