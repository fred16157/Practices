//ȣ���̳� �б��� 6�г��� �� ���� �ִµ� �� ���� ��ǥ�� �� �� �����Ͽ� �������� ������ �Ͽ���. �ݺ��� �� ���� ���⸦ �� ������ �Է¹޾� �� �ݺ��� ���⸦ �� ������ �հ踦 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(�ݵ�� �迭�� �̿��ϰ� �Է��Ŀ� ����ϴ� ������� �ϼ���.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=64&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[4][3];
	int i;
	int j;
	for (i = 0; i < 4; i++)
	{
		printf("%dclass? ", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &nums[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		printf("%dclass : ", i + 1);
		int sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum += nums[i][j];
		}
		printf("%d\n", sum);
	}
	getch();
}