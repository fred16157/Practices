//main() �Լ� ������ ���ڸ� ������� ���� 1, 2, 3 �� ���� ���ڸ� �����Ͽ� ������ �� ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��¿��� ���� ����Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=221&sca=10c0

#include <stdio.h>

void PrintSomething()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			printf("%d + %d = %d\n", i, j, i + j);
		}
	}
}

int main()
{
	PrintSomething();
	getch();
}