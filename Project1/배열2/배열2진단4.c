//3�� 5���� �迭�� �Ʒ� ��� ���� ���� �ʱ�ȭ �� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���ڻ����� ������ 3ĭ�����ϰ� �� ���ڴ� 2ĭ���� �����ʿ� ���߾� ����Ѵ�.��, "%2d   "
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=204&sca=10a0

#include <stdio.h>

int main()
{
	int nums[3][5] = {
		5, 8, 10, 6, 4,
		11, 20, 1, 13, 2,
		7, 9, 14, 22, 3
	};
	int i;
	int j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d   ", nums[i][j]);
		}
		printf("\n");
	}
	getch();
}