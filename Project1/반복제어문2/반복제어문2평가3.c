//������ �Է¹޾Ƽ� 1���� �Է¹��� ���������� 5�� ����� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=32&sca=1070
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	getch();
}