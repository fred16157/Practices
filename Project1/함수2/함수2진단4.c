//원의 넓이를 입력받아 반지름의 길이를 소수 둘째자리까지 출력하는 프로그램을 작성하시오. 
//원의 넓이 = 반지름 * 반지름 * 3.14 식을 이용하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=219&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintRadius(float num)
{
	printf("%.2f", sqrt(num / 3.14));
}

int main()
{
	float num;
	scanf("%f", &num);
	PrintRadius(num);
	getch();
}