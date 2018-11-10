//5개 이상 100개 이하의 문자로 된 단어를 입력받은 후 앞에서부터 5자를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=83&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char string[100];
	int i;
	scanf("%s", &string);
	for (i = 0; i < 5; i++)
	{
		printf("%c", string[i]);
	}
	getch();
}