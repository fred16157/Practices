//100이하의 자연수를 입력받아 아래와 같은 사각형을 출력하는 프로그램을 작성하시오. (출력하는 부분은 함수로 작성하시오.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=72&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintSquare(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			printf("%d ", j * i);
		}
		printf("\n");
	}
}

int main()
{
	int num;
	scanf("%d", &num);
	PrintSquare(num);
	getch();
}