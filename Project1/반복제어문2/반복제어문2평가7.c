//�� ���� �ڿ����� �Է¹޾� �� ���� ����� ���ʷ� 10�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=36&sca=1070
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	int num2 = num;
	for (int Count = 0; Count < 10; num++)
	{
		if (num % num2 == 0)
		{
			printf("%d ", num);
			Count++;
		}
	}
	getch();
}