//�� ���� ������ �Է¹޾� ū ������ ���� ���� �� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=20&sca=1050
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf_s("%d %d", &num1, &num2);

	if (num2 <= num1)
	{
		printf("%d", num1 - num2);
	}
	else
	{
		printf("%d", num2 - num1);
	}
	getch();
}