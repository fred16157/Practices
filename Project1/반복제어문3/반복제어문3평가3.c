//�ڿ��� n�� �Է¹޾� "��� ��"�� ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=42&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i, j;
	scanf_s("%d", &num);

	for (i = 0; i <= num; ++i)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = num - 1; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}