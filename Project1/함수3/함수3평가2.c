//�ڿ��� N�� �Է¹޾� N�� Ȧ���� ��쿡�� 1���� N������ Ȧ����  ¦���� ���� 2���� N������ ¦���� ��� ����ϴ� ���α׷��� ����Լ��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=132&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintOddNums(int i, int num)
{
	if (i <= num)
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
		}
		i++;
		PrintOddNums(i,num);
	}
}

void PrintEvenNums(int i, int num)
{
	if (i <= num)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
		i++;
		PrintEvenNums(i, num);
	}
}

int main()
{
	int num = 0;
	int i = 1;
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		PrintEvenNums(i, num);
	}
	else
	{
		PrintOddNums(i, num);
	}
	getch();
}