//승지는 주사위 놀이를 하다가 주사위를 10번 던져서 각 숫자가 몇 번씩 나왔는지 알아보려고 한다. 한번 던질 때마다 나온 주사위의 숫자를 입력받아서 각 숫자가 몇 번씩 나왔는지 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=60&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int counts[6] = { 0, };
	int i;

	for (i = 0; i < 10; i++);
	{
		int num;
		scanf("%d ", &num);
		counts[num - 1]++;
	}

	for (i = 0; i < 6; i++)
	{
		printf("%d : %d\n", i + 1, counts[i]);
	}
	getch();
}