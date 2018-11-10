//3자리로 이루어진 자연수 3개를 입력받아 그 수들의 곱을 구한 후 그 결과값의 각 자리 숫자들중 0을 제외한 모든 수들의 곱을 구하여 출력하는 프로그램을 재귀함수로 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=136&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ReturnNum(int num)
{
	if (num == 0)
	{
		return 1;
	}
	if (num % 10 == 0)
	{
		return 1 * ReturnNum(num / 10);
	}
	else
	{
		return (num % 10) * ReturnNum(num / 10);
	}
}

int main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d", ReturnNum(num1*num2*num3));
	getch();
}