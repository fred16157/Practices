//100 개 이하의 정수를 입력받다가 0 이 입력되면 그 때까지 입력된 정수 중 5의 배수의 개수와 합계 평균을 출력하는 프로그램을 작성하시오.
//평균은 소수점 이하 1자리까지 출력한다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=57&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100];
	int multi5 = 0;
	int sum = 0;
	int i;
	int j;
	for (i = 0; i < 100; i++)
	{
		scanf("%d ", &nums[i]);
		if (nums[i] == 0)
		{
			break;
		}
	}

	for (j = 0; j < i; j++)
	{
		if (nums[j] % 5 == 0)
		{
			multi5++;
			sum += nums[j];
		}
	}

	printf("Multiples of 5 : %d\nsum : %d\navg : %.1f", multi5, sum, (float)sum / multi5);
	getch();
}