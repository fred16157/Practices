//10���� ������ �Է¹޾� �Է¹��� ���� �� ¦���� ������ Ȧ���� ������ ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=34&sca=1070
#include <stdio.h>

int main()
{
	int Odd = 0;
	int Even = 0;
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num % 2 == 0)
		{
			Even++;
		}
		else
		{
			Odd++;
		}
	}
	printf("even : %d\nodd : %d", Even, Odd);
	getch();
}