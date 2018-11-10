//문자열을 입력받아 알파벳 문자만 모두 대문자로 출력하는 프로그램을 작성하시오. 
//문자열의 길이는 100이하이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=236&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i;
	scanf("%s", &string);
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			printf("%c", string[i]);
		}
		else if (string[i] >= 'a' && string[i] <= 'z')
		{
			printf("%c", string[i] - 32);
		}
	}
	getch();
}