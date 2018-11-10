//10 이하의 자연수 n을 입력받아 "JUNGOL​"을 n번 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=30&sca=10
#include <stdio.h>

int main()
{
	int MaxCount = 0;
	scanf_s("%d", &MaxCount);

	for (int i = 0; i < MaxCount; i++)
	{
		printf("JUNGOL\n");
	}
	getch();
}