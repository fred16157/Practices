//2�� 3�� �迭�� �� �� �����Ͽ� ������ ���� �Է� ���� �� �� �迭�� ���� ��ġ���� ���Ͽ� ���ο� �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=66&sca=10a0

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