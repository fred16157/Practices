//1���� ���޹��� �������� ���� ����ϴ� �Լ��� �ۼ��ϰ� 1000 ������ �ڿ����� �Է¹޾� �ۼ��� �Լ��� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=71&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Func(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	printf("%d", sum);
}

int main()
{
	int num;
	scanf("%d", &num);

	Func(num);
	getch();
}