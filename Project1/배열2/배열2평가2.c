//�л����� ������ �Է��� �޴ٰ� 0�� �ԷµǸ� �� ������ �Է¹��� ������ 10�� ������ �����Ͽ� �����뺰 �л� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (1�� ���� ������ ������� �ʴ´�.)�л��� �ִ� 100�������̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=61&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int counts[10] = { 0, };
	int i;

	for (i = 0; i < 100; i++)
	{
		int num;
		scanf("%d ", &num);
		if (num == 0)
		{
			break;
		}
		counts[num / 10 - 1]++;
	}

	for (i = 9; i >= 0; i--)
	{
		if (counts[i] != 0)
		{
			printf("%d : %d person\n", (i + 1) * 10, counts[i]);
		}
	}
	getch();
}