//첫 번째 수는 1이고 N번째 수는 (N/2)번째 수와 (N-1)번째 수의 합으로 구성된 수열이 있다. 
//50 이하의 자연수 N을 입력받아 재귀호출을 이용하여 이 수열에서 N번째 수를 출력하는 프로그램을 작성하시오.
//(1 2 3 5 7 10 13 18 …)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=228&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int nums[50];
int ReturnIndex(int index, int count)
{
	if (index < count)
	{
		nums[index + 1] = nums[(index + 1) / 2] + nums[index];
		index++;
		ReturnIndex(index, count);
	}
	else
	{
		return nums[index] / 2;
	}
}

int main()
{
	nums[0] = 1;
	int index = 0;
	int count;
	scanf("%d", &count);
	printf("%d",ReturnIndex(index, count));
	getch();
}