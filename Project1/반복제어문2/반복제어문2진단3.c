//하나의 정수를 입력받아 1부터 입력받은 정수까지의 짝수를 차례대로 출력하는 프로그램을 작성하시오.
//입력되는 정수는 50이하이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=180&sca=10
#include <stdio.h>

int main()
{
	int MaxCount = 0;
	scanf_s("%d", &MaxCount);
	for (int i = 1; i <= MaxCount; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
	getch();
}