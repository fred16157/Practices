//10 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오. (배열을 전달하는 함수를 이용한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=216&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int temp;

void ReturnArray(int nums[10], int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = i; j < count; j++)
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
	int nums[10];
	int max;
	int i;
	scanf("%d", &max);
	for (i = 0; i < max; i++)
	{
		scanf("%d", &nums[i]);
	}
	ReturnArray(nums, max);
	for (i = 0; i < max; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}