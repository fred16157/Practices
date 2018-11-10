//20 이하의 자연수 N을 입력받아 재귀함수를 이용해서 문자열 “recursive”를 N번 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=224&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i;
void RecursiveFunc(int count)
{
	if (i < count)
	{
		printf("recursive\n");
		i++;
		RecursiveFunc(count);
	}
}

int main()
{
	i = 0;
	int num;
	scanf("%d", &num);
	RecursiveFunc(num);
	getch();
}