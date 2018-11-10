//두 개의 정수를 전달받아 최대값을 구하여 리턴하는 함수를 작성하고 세 정수를 입력받아 최대값을 출력하는 프로그램을 작성하시오.
//이건 또 뭔소리야
//왜 인수를 두개만 받는건데
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=211&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintMax(int x,int y,int z)
{
	int nums[3] = { x,y,z };
	int Max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (nums[i] >= Max)
		{
			Max = nums[i];
		}
	}
	printf("%d", Max);
}

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	PrintMax(x, y, z);
	getch();
}