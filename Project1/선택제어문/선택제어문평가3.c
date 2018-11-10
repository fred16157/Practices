//년도를 입력받아 윤년(leap year)인지 평년(common year)인지 판단하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=22&sca=1050
#include <stdio.h>

int main()
{
	int Year = 0;
	scanf_s("%d", &Year);

	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}
	getch();
}