//0 부터 100 까지의 점수를 계속 입력받다가 범위를 벗어나는 수가 입력되면 그 이전까지 입력된 자료의 합계와 평균을 출력하는 프로그램을 작성하시오.
//(평균은 반올림하여 소수 첫째자리까지 출력한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=27&sca=1060
#include <stdio.h>

int main()
{
	int sum = 0;
	int Count = 0;
	while (1)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num <= 100 && num >= 0)
		{
			Count++;
			sum += num;
		}
		else
		{
			break;
		}
	}
	printf("sum: %d\navg: %d", sum, sum / Count);
	getch();
}