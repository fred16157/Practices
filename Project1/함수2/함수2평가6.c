//자료의 개수 7을 매크로 상수로 정의하여 자료의 개수만큼 정수를 입력받아 입력받은 순서대로 앞에서부터 마지막까지 가면서 바로 뒤의 숫자와 비교하여 크면 교환한다. 이러한 작업을 세 번 반복한 후 그 결과를 하나의 행에 공백으로 구분하여 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=80&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#define COUNT 7
#include <stdio.h>

void Sort(int *nums, int count)
{
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = i; j < count; i++)
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
	int nums[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		scanf("%d", &nums[i]);
	}
	for (int i = 1; i <= COUNT; i++)
	{
		Sort(nums, COUNT - i);
	}
	for (int i = 0; i < COUNT; i++)
	{
		printf("%d", nums[i]);
	}
	getch();
}