//ù ��°�� 1, �� ��°�� 2, �� ��°���ʹ� ���� �� ���� ���� 100���� ���� �������� �̷���� ������ �ִ�. 
//100 ������ �ڿ��� N�� �Է¹޾� ����Լ��� �̿��Ͽ� N��° ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=134&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum;

int ReturnNums(int N)
{
	if (N == 1) return 1;
	if (N == 2) return 2;
	else
	{
		return (ReturnNums(N - 1)*ReturnNums(N - 2)) % 100;
	}
}

int main()
{
	int N;
	
	scanf("%d", &N);
	printf("%d\n", ReturnNums(N));
	getch();
}