//3�ڸ��� �̷���� �ڿ��� 3���� �Է¹޾� �� ������ ���� ���� �� �� ������� �� �ڸ� ���ڵ��� 0�� ������ ��� ������ ���� ���Ͽ� ����ϴ� ���α׷��� ����Լ��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=136&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ReturnNum(int num)
{
	if (num == 0)
	{
		return 1;
	}
	if (num % 10 == 0)
	{
		return 1 * ReturnNum(num / 10);
	}
	else
	{
		return (num % 10) * ReturnNum(num / 10);
	}
}

int main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d", ReturnNum(num1*num2*num3));
	getch();
}