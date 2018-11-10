//공백을 포함한 문자열을 입력받아 다음과 같이 분리하여 번호와 함께 출력하는 프로그램을 작성하시오. 
//문자열의 길이는 100자 이하이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=88&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i = 0;
	scanf("%s", &string);

	char *Token = strtok(string, " ");
	while (Token != NULL)
	{
		i++;
		printf("%d. %s\n", i, Token);
		Token = strtok(NULL, " ");
	}
	getch();
}