//10���� ���ڸ� �Է¹޾� ���������� �Է¹��� ���ں��� ù ��° �Է¹��� ���ڱ��� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=50&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char chars[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%c ", &chars[i]);
	}
	
	for (i = 9; i >= 0; i--)
	{
		printf("%c ", chars[i]);
	}
	getch();
}