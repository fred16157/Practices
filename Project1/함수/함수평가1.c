//‘@’문자를 10개 출력하는 함수를 작성 한 후 함수를 세 번 호출하여 아래와 같이 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=70&sca=10b0

#include <stdio.h>

void Print()
{
	for (int i = 0; i < 10; i++)
	{
		printf("@");
	}
	printf("\n");
}

int main()
{
	printf("first\n");
	Print();
	printf("second\n");
	Print();
	printf("third\n");
	Print();
	getch();
}