//�ڿ��� N�� �Է¹޾� ����Լ��� �̿��Ͽ� N���� 1���� ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//N�� 50������ �ڿ����̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=225&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void RecursiveFunc(int num)
{
	printf("%d", num);
	if (num > 1)
	{
		num--;
		RecursiveFunc(num);
	}
}

int main()
{
	int num = 0, i = 0;
	scanf("%d", &num);
	RecursiveFunc(num, i);
	getch();
}