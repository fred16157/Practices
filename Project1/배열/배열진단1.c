//���� 10���� ������ �� �ִ� �迭�� ����� 10���� ���ڸ� �Է¹޾� �Է¹��� ���ڸ� �̾ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=192&sca=1090

#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main()
{
	char Characters[11] = {0,};
	int i;

	for (i = 0; i < 10; i++)
	{
		Characters[i] = getchar();
		getchar();
	}

	printf("%s\n", Characters);
	getch();
}