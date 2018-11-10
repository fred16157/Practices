//100개 이하의 정수를 입력받다가 0 이 입력되면 0 을 제외하고 그 때까지 입력 받은 개수를 출력한 후 입력받은 정수를 차례로 출력하되 그 수가 홀수이면 2배한 값을, 짝수인 경우에는 2로 나눈 몫을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=58&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100];
	int i;
	int j;
	for (i = 0; i < 100; i++)
	{
		int num;
		scanf("%d ", &num);
		if (num == 0)
		{
			break;
		}
		nums[i] = num;
	}

	printf("%d\n", i);
	for (j = 0; j < i; j++)
	{
		if (nums[j] % 2 == 0)
		{
			printf("%d ", nums[j] / 2);
		}
		else
		{
			printf("%d ", nums[j] * 2);
		}
	}
	getch();
}