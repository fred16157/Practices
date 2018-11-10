//한 개의 자연수를 입력받아 그 수의 배수를 차례로 10개 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=36&sca=1070
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	int num2 = num;
	for (int Count = 0; Count < 10; num++)
	{
		if (num % num2 == 0)
		{
			printf("%d ", num);
			Count++;
		}
	}
	getch();
}