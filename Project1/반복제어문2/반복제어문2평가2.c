//100 ������ �� ���� ������ �Է¹޾� ���� ������ ū ������ ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=31&sca=10
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf_s("%d %d", &num1, &num2);
	if (num1 <= num2)
	{
		for (int i = num1; i <= num2; i++)
		{
			printf("%d ", i);
		}
	}
	else
	{
		for (int i = num2; i <= num1; i++)
		{
			printf("%d ", i);
		}
	}
	getch();
}