//정수 두 개를 입력받고  계산식을 매크로 함수로 작성하여 두 수의 차를 제곱한 값과 합을 세제곱한 값을 각각 출력하는 프로그램을 작성하시오. (거듭제곱은 '^'로 표시하기로 한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=223&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#define MACRO (X) ((X)*(X))
#include <stdio.h>

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	printf("(%d - %d) ^ 2 = &d", num1, num2, MACRO(num1 - num2));
	printf("(%d + %d) ^ 3 = %d", num1, num2, MACRO(num1 + num2));
}