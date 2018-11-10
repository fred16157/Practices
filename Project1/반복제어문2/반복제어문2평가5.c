//10개의 정수를 입력받아 입력받은 수들 중 짝수의 개수와 홀수의 개수를 각각 구하여 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=34&sca=1070
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