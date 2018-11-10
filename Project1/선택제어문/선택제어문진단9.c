//3개의 정수를 입력받아 조건연산자를 이용하여 입력받은 수들 중 최소값을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=660&sca=1050
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 <= num2)
	{
		if (num1 <= num3)
		{
			printf("%d",num1);
		}
		else
		{
			printf("%d", num3);
		}
	}
	else if (num1 <= num3)
	{
		printf("%d", num2);
	}
	else
	{
		if(num2 <= num3)
		{
			printf("%d", num2);
		}
		else
		{
			printf("%d", num3);
		}
	}
	getch();
}