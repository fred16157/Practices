//10 ������ �� ������ �޾Ƽ� ù ��° ���� �� ��° ����ŭ �ŵ������Ͽ� ���� ���� �����ϴ� �Լ��� �ۼ��Ͽ� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=212&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ReturnSquared(int x, int y)
{
	int sum = x;
	for (int i = 1; i < y; i++)
	{
		sum *= x;
	}
	return sum;
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", ReturnSquared(x, y));
	getch();
}