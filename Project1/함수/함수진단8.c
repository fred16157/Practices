//10 ������ �� ���� ������ �Է¹޾Ƽ� ���� ������ ū �������� �������� ���ʴ�� ����ϴ� ���α׷��� ����ȭ�Ͽ� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=215&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� ���� ���ʿ� �Ҵ�, ū ���� �����ʿ� �Ҵ�
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
		return;
	}
}

//������ ���
void PrintDan(int less, int more)	
{
	for (int i = less; i <= more; i++)
	{
		printf("==%ddan==\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d\n", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	Compare(&num1, &num2);
	PrintDan(num1, num2);
	getch();
}