//100 �̸��� ���� �������� �־�����. �Է¹޴ٰ� 0 �� �ԷµǸ� �������� �Էµ� 0 �� �����ϰ� �� ������ �Էµ� ������ ���� �ڸ� ���ڰ� ���� �� ������ ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (0���� ���ڴ� ������� �ʴ´�.)
//���� ��ó http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=202&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int counts[10] = { 0, };
	int i;

	while (1)
	{
		int num;
		scanf("%d ", &num);
		if (num == 0)
		{
			break;
		}
		counts[num / 10]++;
	}

	for (i = 0; i < 10; i++)
	{
		if (counts[i] != 0)
		{
			printf("%d : %d\n", i, counts[i]);
		}
	}
	getch();
}