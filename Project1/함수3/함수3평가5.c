//100�� ������ �ڿ��� N�� �Է¹޾� ¦���̸� 2��  Ȧ���̸� 3���� ������ �۾��� �ݺ��ϴٰ� �� ���� 1�� �Ǹ� �׶����� �������� �۾��� Ƚ���� ����ϴ� ���α׷��� ����Լ��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=135&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count;
void Divide(int num)
{
	if (num == 1)
	{
		printf("%d", count);
		return;
	}
	if (num % 2 == 0)
	{
		count++;
		Divide(num / 2);
	}
	else
	{
		count++;
		Divide(num / 3);
	}
}

int main()
{
	int num;
	scanf("%d", &num);
	Divide(num);
	getch();
}