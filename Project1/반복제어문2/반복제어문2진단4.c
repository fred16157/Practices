//100 ������ ������ �Է¹޾Ƽ� �Է¹��� �������� 100������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=181&sca=10
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int sum = 0;
	for (int i = num; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	getch();
}