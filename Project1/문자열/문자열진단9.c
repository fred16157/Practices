//문자열을 입력 받아서 문자수만큼 오른쪽으로 한 바퀴 회전하여 출력하는 프로그램을 작성하시오. 문자열의 길이는 100이하이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=238&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i, j = 0;
	int temp;
	scanf("%s", &string);

	for (i = 0; i < strlen(string); i++)
	{
		temp = string[strlen(string) - 1];
		for (j = strlen(string) - 1; j > 0; j--)
		{
			string[j] = string[j - 1];
		}
		string[0] = temp;
		printf("%s\n", string);
	}
	getch();
}