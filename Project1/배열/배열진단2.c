//정수 10 개를 저장할 수 있는 배열을 만들어서 1 부터 10 까지를 대입하고 차례대로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=193&sca=1090
#include <stdio.h>

int main()
{
	int nums[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		nums[i] = i + 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}