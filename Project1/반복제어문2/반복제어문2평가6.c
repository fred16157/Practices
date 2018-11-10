//두 개의 정수를 입력받아 두 정수 사이(두 정수를 포함)에 3의 배수이거나 5의 배수인 수들의 합과 평균을 출력하는 프로그램을 작성하시오.
//(평균은 반올림하여 소수 첫째자리까지 출력한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=35&sca=1070
#include <stdio.h>

int main()
{
	int DefaultCount = 0;
	int MaxCount = 0;
	scanf_s("%d %d", &DefaultCount, &MaxCount);
	int sum = 0;
	int Count = 0;
	for (; DefaultCount <= MaxCount; DefaultCount++)
	{
		if (DefaultCount % 3 == 0 || DefaultCount % 5 == 0)
		{
			sum += DefaultCount;
			Count++;
		}
	}
	printf("sum : %d\navg : %.1f", sum, (float)sum / Count);
	getch();
}