//자연수 N과 M을 입력받아서 주사위를 N번 던져서 나온 눈의 합이 M이 나올 수 있는 모든 경우를 출력하는 프로그램을 작성하시오. 
//단, N은 10 이하의 정수이다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, M ,i =0;
void ReturnNums(int sum, int level)
{
	if (sum == M)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", level);
		}
	}
	ReturnNums(sum + i, level + 1);
}

int main()
{
	int level[10] = { 1, };
	scanf("%d %d", &N, &M);
	ReturnNums(0, level[0]);
}