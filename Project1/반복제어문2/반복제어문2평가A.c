//2���� 9������ �� �� 2���� �Է¹޾� �Է¹��� �� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�� �ݵ�� ���� �Էµ� ���� �����ܺ��� �Ʒ��� ���Ŀ� �°� ����Ͽ��� �Ѵ�.
//������ ������ ������ 3ĭ�̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=39&sca=1070
#include <stdio.h>

int main()
{
	int MaxX = 0;
	int MaxY = 0;

	scanf_s("%d %d", &MaxX, &MaxY);

	if (MaxX < MaxY)
	{
		for (int y = 1; y <= 9; y++)
		{
			for (int x = MaxX; x <= MaxY; x++)
			{
				printf("%d * %d = %2d   ", x, y, x * y);
			}
			printf("\n");
		}
	}
	else
	{
		for (int y = 1; y <= 9; y++)
		{
			for (int x = MaxX; x >= MaxY; x--)
			{
				printf("%d * %d = %2d   ", x, y, x * y);
			}
			printf("\n");
		}
	}
	getch();
}