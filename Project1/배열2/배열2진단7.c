//�迭�� ���� �Ʒ��� ���� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��Ģ�� ù ��° ���� ��� 1�� �ʱ�ȭ �ϰ� ���� ����ʹ� �ٷ� ���� ���� �ٷ� ������ ���� ���� ���̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=207&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[5][5] = { 1,1,1,1,1 };
	int i;
	int j;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			nums[i][j] = nums[i - 1][j] + nums[i][j - 1];
		}
		printf("%d %d %d %d %d\n", nums[i][0], nums[i][1], nums[i][2], nums[i][3], nums[i][4]);
	}
	getch();
}