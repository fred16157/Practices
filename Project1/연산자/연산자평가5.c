//민수와 기영이의 키와 몸무게를 입력받아 민수가 키도 크고 몸무게도 크면 1 그렇지 않으면 0을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=15&sca=1030
#include <stdio.h>

int main()
{
	int Height1 = 0, Weight1 = 0;
	int Height2 = 0, Weight2 = 0;

	scanf_s("%d %d", &Height1, &Weight1);
	scanf_s("%d %d", &Height2, &Weight2);

	printf("%d", Height1 > Height2 && Weight1 > Weight2 ? 1 : 0);
	getch();
}