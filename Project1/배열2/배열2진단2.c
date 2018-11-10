//100 미만의 양의 정수들이 주어진다. 입력받다가 0 이 입력되면 마지막에 입력된 0 을 제외하고 그 때까지 입력된 정수의 십의 자리 숫자가 각각 몇 개인지 작은 수부터 출력하는 프로그램을 작성하시오. (0개인 숫자는 출력하지 않는다.)
//문제 출처 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=202&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int counts[10] = { 0, };
	int i;

	while (1)
	{
		int num;
		scanf("%d ", &num);
		if (num == 0)
		{
			break;
		}
		counts[num / 10]++;
	}

	for (i = 0; i < 10; i++)
	{
		if (counts[i] != 0)
		{
			printf("%d : %d\n", i, counts[i]);
		}
	}
	getch();
}