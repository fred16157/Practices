//���� n�� �Է¹޾� 2n�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (1 �� n �� 20)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=78&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintSquared(int count)
{
	int sum = 2;
	for (int i = 1; i < 10; i++)
	{
		sum *= 2;
	}
	printf("%d", sum);
}

int main()
{
	int count;
	scanf("%d", &count);
	PrintSquared(count);
	getch();
}