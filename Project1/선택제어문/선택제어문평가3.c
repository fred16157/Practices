//�⵵�� �Է¹޾� ����(leap year)���� ���(common year)���� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=22&sca=1050
#include <stdio.h>

int main()
{
	int Year = 0;
	scanf_s("%d", &Year);

	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}
	getch();
}