//�ڿ��� n�� �Է¹ް� 1���� Ȧ���� ���ʴ�� ���س����鼭 ���� n �̻��̸� �� ������ ������ Ȧ���� ������ �� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=186&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i;
	int Count = 0;
	int sum = 0;
	scanf_s("%d", &num);

	for (i = 1; ; i ++)
	{
		if (i % 2 != 0)
		{
			Count++;
			sum += i;
		}
		if (sum >= num)
		{
			break;
		}
	}
	printf("%d %d", Count, sum);
	getch();
}