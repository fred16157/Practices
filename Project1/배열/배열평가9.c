//100�� ������ ������ �Է¹޴ٰ� 0 �� �ԷµǸ� 0 �� �����ϰ� �� ������ �Է� ���� ������ ����� �� �Է¹��� ������ ���ʷ� ����ϵ� �� ���� Ȧ���̸� 2���� ����, ¦���� ��쿡�� 2�� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=58&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100];
	int i;
	int j;
	for (i = 0; i < 100; i++)
	{
		int num;
		scanf("%d ", &num);
		if (num == 0)
		{
			break;
		}
		nums[i] = num;
	}

	printf("%d\n", i);
	for (j = 0; j < i; j++)
	{
		if (nums[j] % 2 == 0)
		{
			printf("%d ", nums[j] / 2);
		}
		else
		{
			printf("%d ", nums[j] * 2);
		}
	}
	getch();
}