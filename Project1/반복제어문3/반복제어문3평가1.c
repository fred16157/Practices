//���� 20 ���� �Է¹޾Ƽ� �� �հ� ����� ����ϵ� 0 �� �ԷµǸ� 20�� �Է��� ������ �ʾҴ��� �� ������ �Էµ� �հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//����� �Ҽ��κ��� ������ ������ ����Ѵ�.(0�� �Էµ� ��� 0�� ������ �հ� ����� ���Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=40&sca=1080
#include <stdio.h>

int main()
{
	int num = 0,sum = 0;
	int Count = 0;
	int i;
	for (i = 0; i < 20; i++)
	{
		scanf_s("%d", &num);

		if (num == 0)
		{
			break;
		}
		else
		{
			sum += num;
			Count++;
		}
	}
	printf("%d %d", sum, sum / Count);
	getch();
}