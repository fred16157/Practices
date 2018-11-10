//100개 이하의 문자열을 입력받아서 영문자와 숫자만 출력하되 영문자는 모두 소문자로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=84&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char string[100];
	int i;
	scanf("%s", &string);
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= '1' && string[i] <= '9')
		{
			printf("%c", string[i]);
		}
		else if (string[i] >= 'A' && string[i] <= 'Z')
		{
			printf("%c", string[i] + 32);
		}
	}
	getch();
}