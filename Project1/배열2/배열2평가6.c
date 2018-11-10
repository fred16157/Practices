//예제를 보고 적당한 배열을 선언한 후 1행의 1열과 3열 5열을 각각 1로 초기화하고 나머지는 모두 0으로 초기화 한 후 2행부터는 바로 위행의 왼쪽과 오른쪽의 값을 더하여 채운 후 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=65&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[5][5] = { {1,0,1,0,1},{0,},{0,},{0,},{0,} };

	int i;
	int j;

	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j + 1];
		}
	}

	for(i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	getch();
}