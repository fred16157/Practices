//5���� ������ �Է¹޾� �� ������ ���밪�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=77&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintAbsSum(int nums[])
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += abs(nums[i]);
	}
	printf("%d", sum);
}

int main()
{
	int nums[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &nums[i]);
	}
	PrintAbsSum(nums);
	getch();
}