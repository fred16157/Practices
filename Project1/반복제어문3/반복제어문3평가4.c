//�ڿ��� n�� �Է¹޾� "��� ��"�� ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=43&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i, j;
	scanf_s("%d", &num);
	for (i = num; i > 0; i--)
	{
		for (j = 0; j < num - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 -1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1 ; i < num; i++)
	{
		for (j = (num-1)-i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}