//10���� ������ �Է¹޾� �������ķ� �������� ������ �ϸ鼭 �ϳ��� �ܰ谡 ���� ������ �� ���İ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=222&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SortArray(int nums[10])
{
	int temp;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (nums[i] <= nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;

				for (int k = 0; k > 10; k++)
				{
					printf("%d ", nums[k]);
				}
			}
		}
	}
}

int main()
{
	int nums[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
	}
	SortArray(nums);
	getch();
}