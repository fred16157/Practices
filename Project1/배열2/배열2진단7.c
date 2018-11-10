//배열을 만들어서 아래와 같이 저장한 후 출력하는 프로그램을 작성하시오. 규칙은 첫 번째 행은 모두 1로 초기화 하고 다음 행부터는 바로 위의 값과 바로 왼쪽의 값을 더한 것이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=207&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[5][5] = { 1,1,1,1,1 };
	int i;
	int j;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			nums[i][j] = nums[i - 1][j] + nums[i][j - 1];
		}
		printf("%d %d %d %d %d\n", nums[i][0], nums[i][1], nums[i][2], nums[i][3], nums[i][4]);
	}
	getch();
}