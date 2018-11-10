//10개의 정수를 입력받아 3의 배수의 개수와 5의 배수의 개수를 각각 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=182&sca=10
#include <stdio.h>

int main()
{
	int multi3 = 0;
	int multi5 = 0;
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		scanf_s("%d", &num);

		if (num % 3 == 0)
		{
			multi3++;
		}
		if (num % 5 == 0)	//공배수를 위해 else를 붙이지 않음
		{
			multi5++;	
		}
	}
	printf("Multiples of 3 : %d\n", multi3);
	printf("Mu;tiples of 5 : %d\n", multi5);
	getch();
}
