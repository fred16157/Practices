//3행 5열의 2차원 문자배열을 선언하고 차례로 대문자를 입력 받은 후 소문자로 바꾸어서 공백으로 구분하여 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=69&sca=10a0

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