//정수를 입력받아 0 이면 "zero" 양수이면 "plus" 음수이면 "minus" 라고 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=21&sca=1050
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	if (num < 0)
	{
		printf("minus");
	}
	else if (num > 0)
	{
		printf("plus");
	}
	else
	{
		printf("zero");
	}
	getch();
}