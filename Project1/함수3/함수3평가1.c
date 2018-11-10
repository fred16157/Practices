//자연수 N을 입력받아 1부터 N까지 출력을 하되 n-1번째 값은 n번째 값을 2로 나눈 몫이 되도록 하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=131&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int RecursiveFunc(int num)
{
	return RecursiveFunc(num / 2);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", RecursiveFunc(num / 2));
}