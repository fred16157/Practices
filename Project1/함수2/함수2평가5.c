//세 개의 실수를 입력받아 합계와 평균을 구하여 평균을 반올림한 정수를 출력하고, 다음은 입력받은 수를 각각 먼저 반올림한 후 합계와 평균을 구하여 평균을 반올림한 한 결과를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=79&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintAvg1(float nums[])
{
	printf("%d\n", (int)(nums[0] + nums[1] + nums[2]) / 3);
}

void PrintAvg2(float nums[])
{
	printf("%d\n",((int)nums[0] + (int)nums[1] + (int)nums[2]) / 3);
}

int main()
{
	float nums[3];
	scanf("%f %f %f", &nums[0], &nums[1], &nums[2]);
	PrintAvg1(nums);
	PrintAvg2(nums);
	getch();
}