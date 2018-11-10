//영문 대문자를 입력받다가 대문자 이외의 문자가 입력되면 입력을 중단하고
//영문 대문자들에 대하여 1번 이상 입력된 각 문자와 그 문자의 개수를 사전 순으로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=201&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int counts[26] = { 0, };
	int i;
	while (1)
	{
		char newchar;
		scanf("%c ", &newchar);
		if ((int)newchar - 65 > 26 || (int)newchar - 65 < 0)
		{
			break;
		}
		counts[(int)newchar - 65]++;
	}

	for (i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			printf("%c : %d\n", (char)i + 65, counts[i]);
		}
	}
	getch();
}