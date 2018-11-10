//아래와 같이 출력되는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=184&sca=10
#include <stdio.h>

int main()
{
	for (int x = 2; x < 7; x++)
	{
		for (int y = x; y < x + 5; y++)
		{
			printf("%d ", y);
		}
		printf("\n");
	}
	getch();
}