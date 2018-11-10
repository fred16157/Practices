//한 개의 정수를 입력받아 양수(positive integer)인지 음수(negative number)인지 출력하는 작업을 반복하다가 0이 입력되면 종료하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=175&sca=1060
#include <stdio.h>

int main()
{
	int num = 0;

	while (1)
	{
		scanf_s("%d", &num);
		if (num > 0)
		{
			printf("positive integer\n");
		}
		else if (num < 0)
		{
			printf("negative integer\n");
		}
		else
		{
			break;
		}
	}
	getchar();
}