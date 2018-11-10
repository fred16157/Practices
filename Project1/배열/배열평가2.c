//5개의 정수를 입력받은 후 첫 번째 세 번째 다섯 번째 입력받은 정수의 합을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=51&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d ", &nums[i]);
	}

	printf("%d", nums[0] + nums[2] + nums[4]);
	getch();
}