//�ڷ��� ���� 7�� ��ũ�� ����� �����Ͽ� �ڷ��� ������ŭ ������ �Է¹޾� �Է¹��� ������� �տ������� ���������� ���鼭 �ٷ� ���� ���ڿ� ���Ͽ� ũ�� ��ȯ�Ѵ�. �̷��� �۾��� �� �� �ݺ��� �� �� ����� �ϳ��� �࿡ �������� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=80&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#define COUNT 7
#include <stdio.h>

void Sort(int *nums, int count)
{
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = i; j < count; i++)
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
	int nums[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		scanf("%d", &nums[i]);
	}
	for (int i = 1; i <= COUNT; i++)
	{
		Sort(nums, COUNT - i);
	}
	for (int i = 0; i < COUNT; i++)
	{
		printf("%d", nums[i]);
	}
	getch();
}