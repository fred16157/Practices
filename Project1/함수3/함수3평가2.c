//자연수 N을 입력받아 N이 홀수인 경우에는 1부터 N까지의 홀수를  짝수인 경우는 2부터 N까지의 짝수를 모두 출력하는 프로그램을 재귀함수로 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=132&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintOddNums(int i, int num)
{
	if (i <= num)
	{
		if (i % 2 != 0)
		{
			printf("%d ", i);
		}
		i++;
		PrintOddNums(i,num);
	}
}

void PrintEvenNums(int i, int num)
{
	if (i <= num)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
		i++;
		PrintEvenNums(i, num);
	}
}

int main()
{
	int num = 0;
	int i = 1;
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		PrintEvenNums(i, num);
	}
	else
	{
		PrintOddNums(i, num);
	}
	getch();
}