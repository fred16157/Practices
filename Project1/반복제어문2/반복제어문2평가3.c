//정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=32&sca=1070
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	getch();
}