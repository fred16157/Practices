//5���� ������ �Է¹��� �� ù ��° �� ��° �ټ� ��° �Է¹��� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=51&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d ", &nums[i]);
	}

	printf("%d", nums[0] + nums[2] + nums[4]);
	getch();
}