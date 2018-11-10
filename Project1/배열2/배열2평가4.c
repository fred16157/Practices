//4행 3열의 배열을 선언하고 아래의 값으로 초기화 한 후 차례대로 출력한 후 배열의 모든 값을 더한 결과를 출력하는 프로그램을 작성하시오.
//{ {3, 5, 9}, { 2, 11, 5 }, { 8, 30, 10 }, { 22, 5, 1 }}
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=63&sca=10a0

#include <stdio.h>

int main()
{
	int nums[4][3] = { { 3, 5, 9 },{ 2, 11, 5 },{ 8, 30, 10 },{ 22, 5, 1 } };
	int i;
	int j;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", nums[i][j]);
			sum += nums[i][j];
		}
		printf("\n");
	}
	printf("%d", sum);
	getch();
}