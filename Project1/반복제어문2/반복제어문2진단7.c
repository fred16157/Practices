//�Ʒ��� ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=184&sca=10
#include <stdio.h>

int main()
{
	for (int x = 2; x < 7; x++)
	{
		for (int y = x; y < x + 5; y++)
		{
			printf("%d ", y);
		}
		printf("\n");
	}
	getch();
}