//2�� 4���� �迭 �� ���� ���� �Է��� �ް� �� �迭�� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=205&sca=10a0

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