//5�� �л��� ���� ���� ���� ���� 4������ ������ �Է� �޾Ƽ� �� ���κ��� ����� 80 �̻��̸顰�հݡ� �׷��� �����顰���հݡ��� ����ϰ� �հ��� ����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=206&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int scores[5][4];
	int i;
	int j;
	int result = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d ", &scores[i][j]);
		}
	}

	for (i = 0; i < 5; i++)
	{
		int sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += scores[i][j];
		}
		printf("%s\n", sum / 4 >= 80 ? "pass" : "fail");
		if (sum / 4 >= 80)
		{
			result++;
		}
	}
	printf("Successful : %d", result);
	getch();
}