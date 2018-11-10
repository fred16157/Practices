//정수를 입력받아 다음과 같이 순서쌍을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=38&sca=1070
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	for (int x = 1; x <= num; x++)
	{
		for (int y = 1; y <= num; y++)
		{
			printf("(%d, %d) ", x, y);
		}
		printf("\n");
	}
	getch();
}