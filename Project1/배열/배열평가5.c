//6명의 몸무게를 입력받아 몸무게의 평균을 출력하는 프로그램을 작성하시오. 
//출력은 반올림하여 소수 첫째자리까지로 한다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=54&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float nums[6];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%f ", &nums[i]);
	}

	printf("%.1f", (nums[0] + nums[1] + nums[2] + nums[3] + nums[4] + nums[5]) / 6);
	getch();
}