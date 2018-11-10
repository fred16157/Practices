//10개의 정수를 입력받아 배열에 저장한 후 짝수 번째 입력된 값의 합과 홀수 번째 입력된 값의 평균을 출력하는 프로그램을 작성하시오. 
//평균은 반올림하여 소수첫째자리까지 출력한다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=199&sca=1090

//변수 10개를 배열로 선언할바엔 차라리 변수 두개로 처리하는게 낫지 않나?
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	//int Oddsum = 0;
	//int Evensum = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
		/*
		int num;
		scanf("%d",&num);

		if(i % 2 == 0)
		{
			Evensum += num;
		}
		else
		{
			Oddsum += num;
		}
		*/
	}

	printf("sum : %d\navg : %.1f", nums[1] + nums[3] + nums[5] + nums[7] + nums[9], (float)(nums[0] + nums[2] + nums[4] + nums[6] + nums[8]) / 5);
	//printf("sum : %d\navg : %.1f", Evensum, (float)Oddsum / 5);
	getch();
}