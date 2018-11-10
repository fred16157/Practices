//문자열(100자 이하)을 입력받은 후 정수를 입력받아 해당위치의 문자를 제거하고 출력하는 작업을 반복하다가 문자 1개가 남으면 종료하는 프로그램을 작성하시오.
//첫 번째 문자의 위치는 1이며 만약 입력받은 번호가 문자열의 길이 이상이면 마지막 문자를 제거한다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=87&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	scanf("%s", &string);
	while (strlen(string) >= 1)
	{
		int index, i = 0;
		scanf("%d", &index);
		string[index - 1] = '\0';
		for (int i = index - 1; i < strlen(string) - 1; i++)
		{
			string[i] = string[i + 1];
		}
		string[i + 2] = '\0';
		printf("%s", string);
	}
	getch();
}