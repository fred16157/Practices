//100 이하의 자연수를 입력받아 첫 번째 항은 100으로 두 번째 항은 입력받은 수로 초기화하고 다음 항부터는 전전항에서 전항을 뺀 수로 채워나가는 수열을 작성하여 그 수가 음수가 나올 때까지 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=203&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100] = {100,0,};
	int i;
	scanf("%d", &nums[1]);

	for (i = 0; ; i++)
	{
		printf("%d ",nums[i+2] = nums[i] - nums[i + 1]);
		if (nums[i + 2] < 0)
		{
			break;
		}
	}
	getch();
}