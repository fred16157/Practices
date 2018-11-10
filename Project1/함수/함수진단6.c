//정수의 연산식을 입력받아 연산을 위한 함수를 호출하여 4칙연산(+ - * /)의 연산결과를 출력하는 프로그램을 작성하시오. 
//('/'의 경우는 정수 부분만 출력하고 4칙연산 이외의 연산 결과는 0으로 한다.)
//단 if~else if~else 문으로 작성하세요.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=213&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintResult(int left, int right, char _operator)
{
	if (_operator == '+')
	{
		printf("%d + %d = %d", left, right, left + right);
	}
	else if (_operator == '-')
	{
		printf("%d - %d = %d", left, right, left - right);
	}
	else if (_operator == '*')
	{
		printf("%d * %d = %d", left, right, left * right);
	}
	else if (_operator == '/')
	{
		printf("%d / %d = %d", left, right, left / right);
	}
	else
	{
		printf("%d %c %d = 0", left, _operator, right);
	}
}

int main()
{
	int left, right; char _operator;
	scanf("%d %c %d", &left, &_operator, &right);
	PrintResult(left, right, _operator);
	getch();
}