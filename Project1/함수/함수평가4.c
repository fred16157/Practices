//�� ���� ������ �Է¹޾� ū ���� �������� ���� ���� ������ �� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�� ������ ���޹޾� ������ ���� �����ϴ� �Լ��� �̿��� ��)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=73&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Compare(int *left, int *right)
{
	if (*left <= *right)
	{
		return;
	}
	else
	{
		int temp = *left;
		*left = *right;
		*right = temp;
	}
}

int Return(int num1, int num2)
{
	return (num2 * num2) - (num1 * num1);
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	Compare(&num1, &num2);
	printf("%d", Return(num1, num2));
	getch();
}