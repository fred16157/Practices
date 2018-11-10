//세 자리 이하의 정수를 차례로 입력 받다가 999가 입력되면 프로그램을 종료하고 그 때까지 입력된 최대값과 최소값을 출력하는 프로그램을 작성하시오.입력받는 정수는 100개 이하이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=56&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100];
	int min = 999;
	int max = 0;
	int i;
	int j;
	for (i = 0; i < 100; i++)
	{
		int num;
		scanf("%d", &num);
		if (num == 999)
		{
			break;
		}
		nums[i] = num;
	}

	for (j = 0; j < i; j++)
	{
		if (nums[j] <= min)
		{
			min = nums[j];
		}
		if (nums[j] >= max)
		{
			max = nums[j];
		}
	}
	printf("max : %d\nmin : %d", max, min);
	getch();
}