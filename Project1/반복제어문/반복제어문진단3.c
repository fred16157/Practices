//�� ���� ������ �Է¹޾� ���(positive integer)���� ����(negative number)���� ����ϴ� �۾��� �ݺ��ϴٰ� 0�� �ԷµǸ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=175&sca=1060
#include <stdio.h>

int main()
{
	int num = 0;

	while (1)
	{
		scanf_s("%d", &num);
		if (num > 0)
		{
			printf("positive integer\n");
		}
		else if (num < 0)
		{
			printf("negative integer\n");
		}
		else
		{
			break;
		}
	}
	getchar();
}