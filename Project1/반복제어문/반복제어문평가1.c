//정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=25&sca=1060
#include <stdio.h>

int main()
{
	int MaxCount = 0;
	scanf_s("%d", &MaxCount);

	for (int i = 0; i < MaxCount; i++)
	{
		printf("%d ", i + 1);
	}
	getch();
}