//20 ������ �ڿ��� N�� �Է¹޾� ����Լ��� �̿��ؼ� ���ڿ� ��recursive���� N�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=224&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i;
void RecursiveFunc(int count)
{
	if (i < count)
	{
		printf("recursive\n");
		i++;
		RecursiveFunc(count);
	}
}

int main()
{
	i = 0;
	int num;
	scanf("%d", &num);
	RecursiveFunc(num);
	getch();
}