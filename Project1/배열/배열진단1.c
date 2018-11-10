//문자 10개를 저장할 수 있는 배열을 만들고 10개의 문자를 입력받아 입력받은 문자를 이어서 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=192&sca=1090

#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main()
{
	char Characters[11] = {0,};
	int i;

	for (i = 0; i < 10; i++)
	{
		Characters[i] = getchar();
		getchar();
	}

	printf("%s\n", Characters);
	getch();
}