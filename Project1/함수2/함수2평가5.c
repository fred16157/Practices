//�� ���� �Ǽ��� �Է¹޾� �հ�� ����� ���Ͽ� ����� �ݿø��� ������ ����ϰ�, ������ �Է¹��� ���� ���� ���� �ݿø��� �� �հ�� ����� ���Ͽ� ����� �ݿø��� �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=79&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintAvg1(float nums[])
{
	printf("%d\n", (int)(nums[0] + nums[1] + nums[2]) / 3);
}

void PrintAvg2(float nums[])
{
	printf("%d\n",((int)nums[0] + (int)nums[1] + (int)nums[2]) / 3);
}

int main()
{
	float nums[3];
	scanf("%f %f %f", &nums[0], &nums[1], &nums[2]);
	PrintAvg1(nums);
	PrintAvg2(nums);
	getch();
}