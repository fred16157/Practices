//첫 번째는 1, 두 번째는 2, 세 번째부터는 앞의 두 수의 곱을 100으로 나눈 나머지로 이루어진 수열이 있다. 
//100 이하의 자연수 N을 입력받아 재귀함수를 이용하여 N번째 값을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=134&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum;

int ReturnNums(int N)
{
	if (N == 1) return 1;
	if (N == 2) return 2;
	else
	{
		return (ReturnNums(N - 1)*ReturnNums(N - 2)) % 100;
	}
}

int main()
{
	int N;
	
	scanf("%d", &N);
	printf("%d\n", ReturnNums(N));
	getch();
}