//10���� ������ �Է¹޾� Ȧ�� ��° �Է¹��� ������ �հ� ¦�� ��° �Է¹��� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=52&sca=1090

//�� ���� �̷��� �迭�� ��ߵ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &nums[i]);
	}
	printf("odd : %d\neven : %d", nums[0] + nums[2] + nums[4] + nums[6] + nums[8], nums[1] + nums[3] + nums[5] + nums[7] + nums[9]);
	getch();
}