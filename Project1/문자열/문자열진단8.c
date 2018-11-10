//공백을 포함한 100글자 이하의 문자열을 입력받아 문장을 이루는 단어의 개수를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=237&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i;
	int Count = 0;
	scanf("%s", &string);
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] == ' ')
		{
			Count++;
		}
	}
	printf("%d", Count);
	getch();
}