//문자열 "~!@#$^&*()_+|" 를 출력하는 함수를 작성하고 정수를 입력받아 입력받은 수만큼 함수를 호출하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=208&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printstring()
{
	printf("~!@#$^&*()_+|\n");
}

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		printstring();
	}
	getch();
}