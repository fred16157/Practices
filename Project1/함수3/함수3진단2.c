//자연수 N을 입력받아 재귀함수를 이용하여 N부터 1까지 차례대로 출력하는 프로그램을 작성하시오. 
//N은 50이하의 자연수이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=225&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void RecursiveFunc(int num)
{
	printf("%d", num);
	if (num > 1)
	{
		num--;
		RecursiveFunc(num);
	}
}

int main()
{
	int num = 0, i = 0;
	scanf("%d", &num);
	RecursiveFunc(num, i);
	getch();
}