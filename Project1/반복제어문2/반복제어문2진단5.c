//10���� ������ �Է¹޾� 3�� ����� ������ 5�� ����� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=182&sca=10
#include <stdio.h>

int main()
{
	int multi3 = 0;
	int multi5 = 0;
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		scanf_s("%d", &num);

		if (num % 3 == 0)
		{
			multi3++;
		}
		if (num % 5 == 0)	//������� ���� else�� ������ ����
		{
			multi5++;	
		}
	}
	printf("Multiples of 3 : %d\n", multi3);
	printf("Mu;tiples of 5 : %d\n", multi5);
	getch();
}
