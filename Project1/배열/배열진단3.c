//10���� ���ڸ� �Է¹޾Ƽ� ù ��° �� ��° �ϰ� ��° �Է¹��� ���ڸ� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=194&sca=1090

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
	printf("%c %c %c", chars[0], chars[3], chars[6]);
	getch();
}