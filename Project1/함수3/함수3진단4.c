//10 이하의 자연수 N을 입력받아 주사위를 N번 던져서 나올 수 있는 모든 경우를 출력하되 중복되는 경우에는 앞에서부터 작은 순으로 1개만 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=227&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int PrintArr[216][10];
void Print(int N,int Count, int Level[10])
{
	for (int i = 1; i <= 6; i++)
	{
		
	}
	//Level[Count]++;
}

int main()
{
	int N;
	int Count = 0;
	int Level[10] = { 1, };
	scanf("%d", &N);
	Print(N);
	getch();
}