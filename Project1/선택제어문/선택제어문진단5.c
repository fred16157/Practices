//�� ���� �Ǽ��� �Է¹޾� ��� 4.0 �̻��̸� "A", ��� 3.0 �̻��̸� "B", �ƴϸ� "C" ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=169&sca=1050
#include <stdio.h>

int main()
{
	float Grade1 = 0, Grade2 = 0;
	scanf_s("%f %f", &Grade1, &Grade2);

	if (Grade1 >= 4.0 && Grade2 >= 4.0)
	{
		printf("A");
	}
	else if (Grade1 >= 3.0 && Grade2 > 3.0)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}
	getch();
}