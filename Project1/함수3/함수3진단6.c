//9�ڸ� ������ �ڿ����� �Է¹޾� ����Լ��� �̿��Ͽ� �� �ڸ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(main()�Լ��� ���� �ϳ�, ����Լ��� �Ű����� �ϳ����� ����� �� �ִ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=229&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ReturnSquared(int num)
{
	if (num == 0)
		return 0;
	else
		return (num % 10) * (num % 10) + ReturnSquared(num / 10);
}

int main()
{
	int num;
	scanf("%d", &num);

	printf("%d\n",ReturnSquared(num));
	getch();
}