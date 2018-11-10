//100 이하의 자연수 N을 입력받아 재귀함수를 이용하여 1부터 N까지의 합을 구하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=226&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void RecursiveAdd(int i, int Max, int *Sum)
{
	if (i <= Max)
	{
		*Sum += i;
		i++;
		RecursiveAdd(i, Max, Sum);
	}
}

int main()
{
	int Sum = 0;
	int i = 1;
	int Max;
	scanf("%d", &Max);
	RecursiveAdd(i, Max, &Sum);
	printf("%d", Sum);
	getch();
}