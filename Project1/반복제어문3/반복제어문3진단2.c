//자연수 n을 입력받아서 n줄만큼 다음과 같이 출력하는 프로그램을 작성하시오
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2078&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int x;
	int y;
	scanf_s("%d", &num);
	for (x = 0; x <= num;x++)
	{
		for (y = 0; y < x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}