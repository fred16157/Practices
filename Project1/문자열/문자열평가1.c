//영문자 두 개를 입력 받아서 각각의 아스키코드의 합과 차를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=82&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char char1, char2;
	scanf("%c %c", &char1, &char2);
	printf("%d ", (int)char1 + (int)char2);
	if (char1 >= char2)
	{
		printf("%d", (int)char1 - (int)char2);
	}
	else
	{
		printf("%d", (int)char2 - (int)char1);
	}
	getch();
}