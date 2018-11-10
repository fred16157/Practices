//10개의 문자를 입력받아 마지막으로 입력받은 문자부터 첫 번째 입력받은 문자까지 차례로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=50&sca=1090

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