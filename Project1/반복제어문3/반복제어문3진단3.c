//�ڿ��� n�� �Է¹޾Ƽ� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=187&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int x;
	int y;
	scanf_s("%d", &num);

	for (x = num;x >= 1; x--)
	{
		printf("\n");
		for (y = 0; y < x; y++)
		{
			printf("*");
		}
	}
	for (x = 0; x <= num; x++)
	{
		for (y = 0; y < x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}