//10 이하의 두 정수를 받아서 첫 번째 수를 두 번째 수만큼 거듭제곱하여 나온 값을 리턴하는 함수를 작성하여 다음과 같이 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=212&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ReturnSquared(int x, int y)
{
	int sum = x;
	for (int i = 1; i < y; i++)
	{
		sum *= x;
	}
	return sum;
}

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", ReturnSquared(x, y));
	getch();
}