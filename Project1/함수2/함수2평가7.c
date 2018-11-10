//원주율을 3.141592로 매크로 상수로 정의하고 원의 넓이를 구하는 매크로 함수를 작성하여 반지름을 입력받아 원의 넓이를 출력하는 프로그램을 작성하시오. (소수 넷째자리에서 반올림)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=81&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#define PIE 3.141592
#define MACRO (x) ((x)*(x) * PIE)
#include <stdio.h>

int main()
{
	int rad;
	printf("radius : ");
	scanf("%d", &rad);
	printf("%.3f", MACRO(rad));
	getch();
}