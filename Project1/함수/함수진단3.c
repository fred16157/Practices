//100 미만의 정수만 입력된다. 정수 n을 입력받아 n x n 크기의 숫자사각형을 출력하는 프로그램을 작성하시오.
//이때 정수 n을 전달받아 숫자 정사각형을 출력하는 함수를 작성하고, 입력받은 정수 n을 함수로 전달하여 출력한다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=210&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MakeSquare(int side)
{
	for (int i = 1; i <= side * side; i++)
	{
		printf("%d ", i);
		if (i % side == 0)
		{
			printf("\n");
		}
	}
}

int main()
{
	int num;
	scanf("%d", &num);

	MakeSquare(num);
	getch();
}