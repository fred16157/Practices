//100 ������ �ڿ����� �Է¹޾� ù ��° ���� 100���� �� ��° ���� �Է¹��� ���� �ʱ�ȭ�ϰ� ���� �׺��ʹ� �����׿��� ������ �� ���� ä�������� ������ �ۼ��Ͽ� �� ���� ������ ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=203&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100] = {100,0,};
	int i;
	scanf("%d", &nums[1]);

	for (i = 0; ; i++)
	{
		printf("%d ",nums[i+2] = nums[i] - nums[i + 1]);
		if (nums[i + 2] < 0)
		{
			break;
		}
	}
	getch();
}