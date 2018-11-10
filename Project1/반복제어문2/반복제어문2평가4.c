//100 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 평균을 출력하는 프로그램을 작성하시오. 
//(평균은 반올림하여 소수 둘째자리까지 출력하도록 한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=33&sca=1070
#include <stdio.h>

int main()
{
	int sum = 0;
	int MaxCount = 0;
	scanf_s("%d", &MaxCount);
	for (int i = 0; i < MaxCount; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		sum += num;
	}
	printf("%.2f", (float)sum / MaxCount);
	getch();
}