//3���� ������ �Է¹޾� ���ǿ����ڸ� �̿��Ͽ� �Է¹��� ���� �� �ּҰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=660&sca=1050
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 <= num2)
	{
		if (num1 <= num3)
		{
			printf("%d",num1);
		}
		else
		{
			printf("%d", num3);
		}
	}
	else if (num1 <= num3)
	{
		printf("%d", num2);
	}
	else
	{
		if(num2 <= num3)
		{
			printf("%d", num2);
		}
		else
		{
			printf("%d", num3);
		}
	}
	getch();
}