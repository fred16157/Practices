//100 ������ �ڿ��� N�� �Է¹޾� ����Լ��� �̿��Ͽ� 1���� N������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=226&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void RecursiveAdd(int i, int Max, int *Sum)
{
	if (i <= Max)
	{
		*Sum += i;
		i++;
		RecursiveAdd(i, Max, Sum);
	}
}

int main()
{
	int Sum = 0;
	int i = 1;
	int Max;
	scanf("%d", &Max);
	RecursiveAdd(i, Max, &Sum);
	printf("%d", Sum);
	getch();
}