//자연수 n을 입력받아 "출력 예"와 같이 출력되는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=42&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i, j;
	scanf_s("%d", &num);

	for (i = 0; i <= num; ++i)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = num - 1; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}