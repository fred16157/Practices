//�ڿ��� n�� �Է¹޾Ƽ� n�ٸ�ŭ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2078&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int x;
	int y;
	scanf_s("%d", &num);
	for (x = 0; x <= num;x++)
	{
		for (y = 0; y < x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}