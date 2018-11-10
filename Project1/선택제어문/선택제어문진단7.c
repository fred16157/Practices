//영문 대문자를 입력받아 
//'A'이면 “Excellent”,
//'B'이면 “Good”,
//'C'이면 “Usually”,
//'D'이면 “Effort”,
//'F'이면 “Failure”,
//그 외 문자이면 “error” 라고 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=171&sca=1050
#include <stdio.h>

int main()
{
	char Grade = '\0';
	scanf_s("%c", &Grade);

	if (Grade == 'A')
	{
		printf("Excellent");
	}
	else if (Grade == 'B')
	{
		printf("Good");
	}
	else if (Grade == 'C')
	{
		printf("Usually");
	}
	else if (Grade == 'D')
	{
		printf("Effort");
	}
	else if (Grade == 'F')
	{
		printf("Failure");
	}
	else
	{
		printf("Error");
	}
	getch();
}