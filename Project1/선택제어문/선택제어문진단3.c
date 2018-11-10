//나이를 입력받아 20살 이상이면 "adult"라고 출력하고 그렇지 않으면 몇 년후에 성인이 되는지를 "○ years later"라는 메시지를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=167&sca=1050
#include <stdio.h>

int main()
{
	int Age = 0;
	scanf_s("%d", &Age);
	if (Age >= 20)
	{
		printf("adult");
	}
	else
	{
		printf("%d years later", 20 - Age);
	}
	getch();
}