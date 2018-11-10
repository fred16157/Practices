//2행 3열 배열을 두 개 선언하여 각각의 값을 입력 받은 후 두 배열의 같은 위치끼리 곱하여 새로운 배열에 저장한 후 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=66&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums1[2][3];
	int nums2[2][3];
	int i;
	int j;
	printf("first array\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &nums1[i][j]);
		}
	}

	printf("second array\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &nums2[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", nums1[i][j] * nums2[i][j]);
		}
		printf("\n");
	}
	getch();
}