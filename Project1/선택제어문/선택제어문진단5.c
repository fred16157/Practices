//두 개의 실수를 입력받아 모두 4.0 이상이면 "A", 모두 3.0 이상이면 "B", 아니면 "C" 라고 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=169&sca=1050
#include <stdio.h>

int main()
{
	float Grade1 = 0, Grade2 = 0;
	scanf_s("%f %f", &Grade1, &Grade2);

	if (Grade1 >= 4.0 && Grade2 >= 4.0)
	{
		printf("A");
	}
	else if (Grade1 >= 3.0 && Grade2 > 3.0)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}
	getch();
}