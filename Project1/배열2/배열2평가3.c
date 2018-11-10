//10 미만의 자연수 두 개를 입력받아서 첫 번째 항과 두 번째 항을 입력받은 수로 초기화 시킨 후 세 번째 항부터는 전전항과 전항의 합을 구하여 그 합의 1의 자리로 채워서 차례로 10개를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=62&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[10];
	int i;
	scanf("%d %d ", &nums[0], &nums[1]);

	for (i = 2; i < 10; i++)
	{
		nums[i] = (nums[i - 2] + nums[i - 1]) % 10;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}