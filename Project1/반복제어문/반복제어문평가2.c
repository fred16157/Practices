//정수를 입력받다가 0 이 입력되면 그 때까지 입력받은 홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=26&sca=1060
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