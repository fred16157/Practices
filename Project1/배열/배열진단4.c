//100 개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례로 입력받다가 0 이 입력되면 0 을 제외하고 그 때까지 입력된 정수를 가장 나중에 입력된 정수부터 차례대로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=195&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100] = { 0, };
	int i;
	for (i = 0; i < 100; i++)
	{
		scanf("%d ", &nums[i]);
		if (nums[i] == 0)
		{
			break;
		}
	}
	for (int i = 99; i >= 0; i--)
	{
		if(nums[i] == 0)
		{
			continue;
		}
		printf("%d ", nums[i]);
	}
	getch();
}