//문자열을 입력받은 뒤 그 문자열을 이어서 두 번 출력하는 프로그램을 작성하시오. 
//문자열의 길이는 100이하이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=231&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char string[100];
	scanf("%s", &string);
	printf("%s\n", string);
	printf("%s\n", string);
	getch();
}