//정수 20 개를 입력받아서 그 합과 평균을 출력하되 0 이 입력되면 20개 입력이 끝나지 않았더라도 그 때까지 입력된 합과 평균을 출력하는 프로그램을 작성하시오. 
//평균은 소수부분은 버리고 정수만 출력한다.(0이 입력된 경우 0을 제외한 합과 평균을 구한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=40&sca=1080
#include <stdio.h>

int main()
{
	int num = 0,sum = 0;
	int Count = 0;
	int i;
	for (i = 0; i < 20; i++)
	{
		scanf_s("%d", &num);

		if (num == 0)
		{
			break;
		}
		else
		{
			sum += num;
			Count++;
		}
	}
	printf("%d %d", sum, sum / Count);
	getch();
}