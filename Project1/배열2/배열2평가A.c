//3�� 5���� 2���� ���ڹ迭�� �����ϰ� ���ʷ� �빮�ڸ� �Է� ���� �� �ҹ��ڷ� �ٲپ �������� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=69&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char Chars[3][5];
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			char TempChar;
			scanf("%c ", &TempChar);
			Chars[i][j] = TempChar + 32;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%c ", Chars[i][j]);
		}
		printf("\n");
	}
	getch();
}