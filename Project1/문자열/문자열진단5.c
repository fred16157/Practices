//두 개의 문자열을 입력받아서 두 문자열의 길이의 합을 출력하는 프로그램을 작성하시오.
//각 문자열의 길이는 20자 미만이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=234&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string1[20];
	char string2[20];
	scanf("%s %s", &string1, &string2);

	printf("%d", strlen(string1) + strlen(string2));
	getch();
}

