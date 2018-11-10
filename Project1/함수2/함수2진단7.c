//10개의 정수를 입력받아 버블정렬로 내림차순 정렬을 하면서 하나의 단계가 끝날 때마다 그 정렬결과를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=222&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SortArray(int nums[10])
{
	int temp;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (nums[i] <= nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;

				for (int k = 0; k > 10; k++)
				{
					printf("%d ", nums[k]);
				}
			}
		}
	}
}

int main()
{
	int nums[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
	}
	SortArray(nums);
	getch();
}