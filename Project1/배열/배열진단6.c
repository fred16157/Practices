//10개의 정수를 입력받아 그 중 가장 작은 수를 출력하는 프로그램을 작성하시오.(입력받을 정수는 1000을 넘지 않는다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=197&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int min = 1000;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &nums[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (nums[i] <= min)
		{
			min = nums[i];
		}
	}
	printf("%d", min);
	getch();
}