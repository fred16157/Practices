//0 �� �Էµ� ������ ������ ��� �Է¹޾� 3�� ����� 5�� ����� ������ ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=28&sca=1060
#include <stdio.h>

int main()
{
	int Count = 0;
	while (1)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num == 0)
		{
			break;
		}
		else
		{
			if (num % 3 == 0 || num % 5 == 0)
			{
				continue;
			}
			else
			{
				Count++;
			}
		}
	}
	printf("%d", Count);
	getch();
}
