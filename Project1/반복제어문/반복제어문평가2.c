//������ �Է¹޴ٰ� 0 �� �ԷµǸ� �� ������ �Է¹��� Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=26&sca=1060
#include <stdio.h>

int main()
{
	int Odd = 0;
	int Even = 0;
	while (1)
	{
		int num = 0;
		scanf_s("%d", &num);

		if (num == 0)
		{
			break;
		}

		if (num % 2 == 0)
		{
			Even++;
		}
		else
		{
			Odd++;
		}
	}
	printf("odd: %d\neven: %d", Odd, Even);
	getch();
}