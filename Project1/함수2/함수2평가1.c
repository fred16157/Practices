//���� N�� �Է¹ް� �ٽ� N���� ������ �Է¹޾� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//(1 �� N �� 15, �Է°� ���, ������ ��� �Լ��� �̿��� ��)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=75&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Sort(int max, int nums[])
{
	int temp;
	for (int i = 0; i < max; i++)
	{
		for (int j = i; j < max; j++)
		{
			if (nums[i] <= nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
}

int main()
{
	int count;
	int nums[15];
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &nums[i]);
	}
	Sort(count, nums);

	for (int i = 0; i < count; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}