//4�� 3���� �迭�� �����ϰ� �Ʒ��� ������ �ʱ�ȭ �� �� ���ʴ�� ����� �� �迭�� ��� ���� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//{ {3, 5, 9}, { 2, 11, 5 }, { 8, 30, 10 }, { 22, 5, 1 }}
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=63&sca=10a0

#include <stdio.h>

int main()
{
	int nums[4][3] = { { 3, 5, 9 },{ 2, 11, 5 },{ 8, 30, 10 },{ 22, 5, 1 } };
	int i;
	int j;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", nums[i][j]);
			sum += nums[i][j];
		}
		printf("\n");
	}
	printf("%d", sum);
	getch();
}