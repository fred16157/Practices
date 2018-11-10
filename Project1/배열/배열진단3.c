//10개의 문자를 입력받아서 첫 번째 네 번째 일곱 번째 입력받은 문자를 차례로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=194&sca=1090

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