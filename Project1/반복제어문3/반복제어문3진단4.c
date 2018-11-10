//자연수 n을 입력받아서 다음과 같이 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=188&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i, j;
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < num - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}