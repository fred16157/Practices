//������ �Է¹޾� ù �ٿ� �Է� ���� ���ڸ� ����ϰ� ��° �ٿ� �����̸� ��minus�� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=165&sca=1050
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	printf(num);
	if (num < 0)
	{
		printf("minus");
	}
	getch();
}