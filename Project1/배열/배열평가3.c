//10개의 정수를 입력받아 홀수 번째 입력받은 정수의 합과 짝수 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=52&sca=1090

//왜 굳이 이런걸 배열로 써야되지

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &nums[i]);
	}
	printf("odd : %d\neven : %d", nums[0] + nums[2] + nums[4] + nums[6] + nums[8], nums[1] + nums[3] + nums[5] + nums[7] + nums[9]);
	getch();
}