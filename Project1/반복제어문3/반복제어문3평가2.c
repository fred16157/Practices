//1���� 100������ ���� �� �� ���� �Է¹޾� 100 ���� ���� ������� ���ʷ� ����ϴٰ� 10 �� ����� ��µǸ� ���α׷��� �����ϵ��� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=41&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i;
	scanf_s("%d", &num);
	for (i = num; i < 100; i += num)
	{
		if (i % num == 0)
		{
			printf("%d ", i);
		}
		if (i % 10 == 0)
		{
			break;
		}
	}
	getch();
}