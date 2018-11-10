//두 개의 정수를 입력받아 절대값이 더 큰 수를 출력하고 두 개의 실수를 입력받아 절대값이 작은 수를 출력하는 프로그램을 작성하시오. 실수는 소수점 이하 2자리까지 출력한다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=218&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintAbs(int left, int right)
{
	if (abs(left) <= abs(right))
	{
		printf("%d\n", right);
	}
	else
	{
		printf("%d\n", left);
	}
}

void PrintfAbs(float left, float right)
{
	if (fabs(left) >= fabs(right))
	{
		printf("%.2f", right);
	}
	else
	{
		printf("%.2f", left);
	}
}

int main()
{
	int num1, num2;
	float _num1, _num2;
	scanf("%d %d", &num1, &num2);
	scanf("%f %f", &_num1, &_num2);
	PrintAbs(num1, num2);
	PrintfAbs(_num1, _num2);
	getch();
}