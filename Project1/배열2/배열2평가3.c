//10 �̸��� �ڿ��� �� ���� �Է¹޾Ƽ� ù ��° �װ� �� ��° ���� �Է¹��� ���� �ʱ�ȭ ��Ų �� �� ��° �׺��ʹ� �����װ� ������ ���� ���Ͽ� �� ���� 1�� �ڸ��� ä���� ���ʷ� 10���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=62&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int i;
	scanf("%d %d ", &nums[0], &nums[1]);

	for (i = 2; i < 10; i++)
	{
		nums[i] = (nums[i - 2] + nums[i - 1]) % 10;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}