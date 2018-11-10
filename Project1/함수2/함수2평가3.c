//5개의 정수를 입력받아 각 정수의 절대값의 합을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=77&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintAbsSum(int nums[])
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += abs(nums[i]);
	}
	printf("%d", sum);
}

int main()
{
	int nums[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &nums[i]);
	}
	PrintAbsSum(nums);
	getch();
}