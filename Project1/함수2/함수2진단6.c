//main() 함수 내에는 숫자를 사용하지 말고 1, 2, 3 세 개의 숫자를 조합하여 가능한 한 모든 합을 출력하는 프로그램을 작성하시오. 출력예와 같이 출력하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=221&sca=10c0

#include <stdio.h>

void PrintSomething()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			printf("%d + %d = %d\n", i, j, i + j);
		}
	}
}

int main()
{
	PrintSomething();
	getch();
}