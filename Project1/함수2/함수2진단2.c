//2016���� ��¥�� �� ���� ���� �� �Ϸ� �Է¹޾Ƽ� �Էµ� ��¥�� �����ϸ� "OK!" �׷��� ������ "BAD!"��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=217&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int chkarr[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

int CheckDay(int month, int day)
{
	if (chkarr[month - 1] >= day)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int month, day;
	scanf("%d %d", &month, &day);
	if (CheckDay(month,day) == 1)
	{
		printf("OK!");
	}
	else
	{
		printf("BAD!");
	}
	getch();
}