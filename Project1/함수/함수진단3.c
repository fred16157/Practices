//100 �̸��� ������ �Էµȴ�. ���� n�� �Է¹޾� n x n ũ���� ���ڻ簢���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�̶� ���� n�� ���޹޾� ���� ���簢���� ����ϴ� �Լ��� �ۼ��ϰ�, �Է¹��� ���� n�� �Լ��� �����Ͽ� ����Ѵ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=210&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MakeSquare(int side)
{
	for (int i = 1; i <= side * side; i++)
	{
		printf("%d ", i);
		if (i % side == 0)
		{
			printf("\n");
		}
	}
}

int main()
{
	int num;
	scanf("%d", &num);

	MakeSquare(num);
	getch();
}