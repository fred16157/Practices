//�ϳ��� ������ �Է¹޾� 1���� �Է¹��� ���������� ¦���� ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�ԷµǴ� ������ 50�����̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=180&sca=10
#include <stdio.h>

int main()
{
	int MaxCount = 0;
	scanf_s("%d", &MaxCount);
	for (int i = 1; i <= MaxCount; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
	getch();
}