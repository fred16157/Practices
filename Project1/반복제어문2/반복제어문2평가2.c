//100 이하의 두 개의 정수를 입력받아 작은 수부터 큰 수까지 차례대로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=31&sca=10
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf_s("%d %d", &num1, &num2);
	if (num1 <= num2)
	{
		for (int i = num1; i <= num2; i++)
		{
			printf("%d ", i);
		}
	}
	else
	{
		for (int i = num2; i <= num1; i++)
		{
			printf("%d ", i);
		}
	}
	getch();
}