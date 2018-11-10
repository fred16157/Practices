//두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=20&sca=1050
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf_s("%d %d", &num1, &num2);

	if (num2 <= num1)
	{
		printf("%d", num1 - num2);
	}
	else
	{
		printf("%d", num2 - num1);
	}
	getch();
}