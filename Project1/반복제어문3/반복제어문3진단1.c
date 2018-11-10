//자연수 n을 입력받고 1부터 홀수를 차례대로 더해나가면서 합이 n 이상이면 그 때까지 더해진 홀수의 개수와 그 합을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=186&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i;
	int Count = 0;
	int sum = 0;
	scanf_s("%d", &num);

	for (i = 1; ; i ++)
	{
		if (i % 2 != 0)
		{
			Count++;
			sum += i;
		}
		if (sum >= num)
		{
			break;
		}
	}
	printf("%d %d", Count, sum);
	getch();
}