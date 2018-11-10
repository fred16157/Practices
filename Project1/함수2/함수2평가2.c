//두 개의 실수를 입력받아 각각의 제곱근을 구하고 두 제곱근 사이에 존재하는 정수의 개수를 출력하는 프로그램을 작성하시오.// 
//단, 입력받는 두 실수는 양수이며 두 제곱근 사이라는 말은 두 제곱근을 포함한다.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=76&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintInts(float min, float max)
{
	int count = 0;
	for (int i = min; i < max; i++)
	{
		count++;
	}
	printf("%d", count - 1);
}

int main()
{
	float min, max;
	scanf("%f %f", &min, &max);
	PrintInts(sqrt(min), sqrt(max));
	getch();
}