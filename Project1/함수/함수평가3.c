//100������ �ڿ����� �Է¹޾� �Ʒ��� ���� �簢���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (����ϴ� �κ��� �Լ��� �ۼ��Ͻÿ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=72&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintSquare(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			printf("%d ", j * i);
		}
		printf("\n");
	}
}

int main()
{
	int num;
	scanf("%d", &num);
	PrintSquare(num);
	getch();
}