//정수 N을 입력받고 다시 N개의 정수를 입력받아 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오. 
//(1 ≤ N ≤ 15, 입력과 출력, 정렬은 모두 함수를 이용할 것)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=75&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Sort(int max, int nums[])
{
	int temp;
	for (int i = 0; i < max; i++)
	{
		for (int j = i; j < max; j++)
		{
			if (nums[i] <= nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
}

int main()
{
	int count;
	int nums[15];
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &nums[i]);
	}
	Sort(count, nums);

	for (int i = 0; i < count; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}