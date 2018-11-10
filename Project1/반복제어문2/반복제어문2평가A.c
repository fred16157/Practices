//2부터 9까지의 수 중 2개를 입력받아 입력받은 수 사이의 구구단을 출력하는 프로그램을 작성하시오.
//단 반드시 먼저 입력된 수의 구구단부터 아래의 형식에 맞게 출력하여야 한다.
//구구단 사이의 공백은 3칸이다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=39&sca=1070
#include <stdio.h>

int main()
{
	int MaxX = 0;
	int MaxY = 0;

	scanf_s("%d %d", &MaxX, &MaxY);

	if (MaxX < MaxY)
	{
		for (int y = 1; y <= 9; y++)
		{
			for (int x = MaxX; x <= MaxY; x++)
			{
				printf("%d * %d = %2d   ", x, y, x * y);
			}
			printf("\n");
		}
	}
	else
	{
		for (int y = 1; y <= 9; y++)
		{
			for (int x = MaxX; x >= MaxY; x--)
			{
				printf("%d * %d = %2d   ", x, y, x * y);
			}
			printf("\n");
		}
	}
	getch();
}