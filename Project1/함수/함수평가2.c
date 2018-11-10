//1부터 전달받은 수까지의 합을 출력하는 함수를 작성하고 1000 이하의 자연수를 입력받아 작성한 함수로 전달하여 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=71&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Func(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	printf("%d", sum);
}

int main()
{
	int num;
	scanf("%d", &num);

	Func(num);
	getch();
}