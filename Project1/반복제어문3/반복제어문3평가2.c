//1부터 100까지의 정수 중 한 개를 입력받아 100 보다 작은 배수들을 차례로 출력하다가 10 의 배수가 출력되면 프로그램을 종료하도록 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=41&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i;
	scanf_s("%d", &num);
	for (i = num; i < 100; i += num)
	{
		if (i % num == 0)
		{
			printf("%d ", i);
		}
		if (i % 10 == 0)
		{
			break;
		}
	}
	getch();
}