//�ڿ��� n�� �Է¹޾Ƽ� n���� �ٿ� n+1���� ���� Ȥ�� ���ڷ� ä���� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=191&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i, j;
	int Count = 0, ASCIICount = 0;
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i; j++)
		{
			printf("%d ", ++Count);
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("%c ", 'A'+ASCIICount);
			ASCIICount++;
			if (ASCIICount >= 26)
			{
				ASCIICount = 0;
			}
		}
		printf("\n");
	}
	getch();
}