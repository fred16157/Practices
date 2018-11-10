//0 이 입력될 때까지 정수를 계속 입력받아 3의 배수와 5의 배수를 제외한 수들의 개수를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=28&sca=1060
#include <stdio.h>

int main()
{
	int Count = 0;
	while (1)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num == 0)
		{
			break;
		}
		else
		{
			if (num % 3 == 0 || num % 5 == 0)
			{
				continue;
			}
			else
			{
				Count++;
			}
		}
	}
	printf("%d", Count);
	getch();
}
