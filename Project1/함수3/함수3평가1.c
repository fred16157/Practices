//�ڿ��� N�� �Է¹޾� 1���� N���� ����� �ϵ� n-1��° ���� n��° ���� 2�� ���� ���� �ǵ��� �ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=131&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int RecursiveFunc(int num)
{
	return RecursiveFunc(num / 2);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", RecursiveFunc(num / 2));
}