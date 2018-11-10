//두 개의 단어를 입력받아서 길이가 긴 단어의 문자 개수를 출력하는 프로그램을 작성하시오. 
//단어의 길이는 100자 이하다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=86&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string1[100], string2[100];
	scanf("%s %s", &string1, &string2);

	if (strlen(string1) >= strlen(string2))
	{
		printf("%d", strlen(string1));
	}
	else
	{
		printf("%d", strlen(string2));
	}
	getch();
}