//0 ���� 100 ������ ������ ��� �Է¹޴ٰ� ������ ����� ���� �ԷµǸ� �� �������� �Էµ� �ڷ��� �հ�� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=27&sca=1060
#include <stdio.h>

int main()
{
	int sum = 0;
	int Count = 0;
	while (1)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num <= 100 && num >= 0)
		{
			Count++;
			sum += num;
		}
		else
		{
			break;
		}
	}
	printf("sum: %d\navg: %d", sum, sum / Count);
	getch();
}