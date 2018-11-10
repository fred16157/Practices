//1부터 15까지 차례로 출력하는 프로그램을 작성하시오. while문을 이용하세요.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=173&sca=1060
#include <stdio.h>

int main()
{
	int Count = 0;
	while (Count < 15)
	{
		Count++;
		printf("%d ", Count);
	}
	getchar();
}