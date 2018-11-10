//100 이하의 정수를 입력받아서 입력받은 정수부터 100까지의 합을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=181&sca=10
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int sum = 0;
	for (int i = num; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	getch();
}