//2행 4열의 배열 두 개를 만들어서 입력을 받고 두 배열의 곱을 구하여 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=205&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums1[2][4];
	int nums2[2][4];
	int i;
	int j;
	printf("first array\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d ", &nums1[i][j]);
		}
	}

	printf("second array\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d ", &nums2[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", nums1[i][j] * nums2[i][j]);
		}
		printf("\n");
	}
	getch();
}