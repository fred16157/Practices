//문자열을 “Hong Gil Dong”으로 초기화 한 후 3번부터 6번까지의 문자를 차례로 출력하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=232&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	char string[] = "Hong Gil Dong";
	for (i = 3; i < 7; i++)
	{
		printf("%c", string[i]);
	}
	getch();
}