//100만 이하의 자연수 N을 입력받아 짝수이면 2로  홀수이면 3으로 나누는 작업을 반복하다가 그 값이 1이 되면 그때까지 나누었던 작업의 횟수를 출력하는 프로그램을 재귀함수로 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=135&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count;
void Divide(int num)
{
	if (num == 1)
	{
		printf("%d", count);
		return;
	}
	if (num % 2 == 0)
	{
		count++;
		Divide(num / 2);
	}
	else
	{
		count++;
		Divide(num / 3);
	}
}

int main()
{
	int num;
	scanf("%d", &num);
	Divide(num);
	getch();
}