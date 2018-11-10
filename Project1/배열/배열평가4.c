//100개의 정수를 입력받을 수 있는 배열을 선언한 후 정수를 차례로 입력 받다가 -1이 입력되면 입력을 중단하고 -1을 제외한 마지막 세 개의 정수를 출력하는 프로그램을 작성하시오. (입력받은 정수가 -1을 제외하고 3개 미만일 경우에는 -1을 제외하고 입력받은 정수를 모두 출력한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=53&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		int num;
		scanf("%d ", &num);
		if (num == -1)
		{
			break;
		}
		nums[i] = num;
	}
	int maxi = i;
	for (i -= 3; i < maxi ; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}