//������ �Է¹޾� 0 �̸� "zero" ����̸� "plus" �����̸� "minus" ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=21&sca=1050
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	if (num < 0)
	{
		printf("minus");
	}
	else if (num > 0)
	{
		printf("plus");
	}
	else
	{
		printf("zero");
	}
	getch();
}