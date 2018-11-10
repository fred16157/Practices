//문자열을 입력받고 정수를 입력 받아서 문자열의 맨 뒤부터 정수만큼 출력하는 프로그램을 작성하시오.
//만약 입력받은 정수가 문자열의 길이보다 크다면 맨 뒤부터 맨 처음까지 모두 출력한다.
//(문자열 길이는 최대 100자 이하이다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=233&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i;
	int count;

	scanf("%s %d", &string, &count);

	for (i = strlen(string) - 1; i >= count-1 ; i--)
	{
		printf("%c", string[i]);
	}
	getch();
}