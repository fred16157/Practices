//정수를 입력받아 첫 줄에 입력 받은 숫자를 출력하고 둘째 줄에 음수이면 “minus” 라고 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=165&sca=1050
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	printf(num);
	if (num < 0)
	{
		printf("minus");
	}
	getch();
}