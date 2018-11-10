//1~12사이의 정수를 입력받아 평년의 경우 입력받은 월을 입력받아 평년의 경우 해당 월의 날수를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=24&sca=1050
#include <stdio.h>

int main()
{
	//31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	int Month = 0;
	scanf_s("%d", &Month);

	switch (Month)
	{
	case 1:
		printf("31");
		break;
	case 2:
		printf("28");
		break;
	case 3:
		printf("31");
		break;
	case 4:
		printf("30");
		break;
	case 5:
		printf("31");
		break;
	case 6:
		printf("30");
		break;
	case 7:
		printf("31");
		break;
	case 8:
		printf("31");
		break;
	case 9:
		printf("30");
		break;
	case 10:
		printf("31");
		break;
	case 11:
		printf("30");
		break;
	case 12:
		printf("31");
		break;
	}
	getchar();
}