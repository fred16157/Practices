//두 정수를 입력받아서 나눈 몫과 나머지를 다음과 같은 형식으로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=12&sca=1030
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf_s("%d %d", &num1, &num2);
	printf("%d / %d = %d...%d", num1, num2, num1 / num2, num1 % num2);
	getch();
}