//��� ���� ���� �Է¹޾� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=37&sca=1070
#include <stdio.h>

int main()
{
	int MaxWidth = 0;
	int MaxHeight = 0;
	scanf_s("%d %d", &MaxHeight, &MaxWidth);

	for (int Height = 1; Height <= MaxHeight; Height++)
	{
		for (int Width = 1; Width <= MaxWidth; Width++)
		{
			printf("%d ", Width * Height);
		}
		printf("\n");
	}
	getch();
}