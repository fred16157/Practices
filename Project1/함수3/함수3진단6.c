//9자리 이하의 자연수를 입력받아 재귀함수를 이용하여 각 자리 숫자의 제곱의 합을 출력하는 프로그램을 작성하시오.
//(main()함수에 변수 하나, 재귀함수에 매개변수 하나만을 사용할 수 있다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=229&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ReturnSquared(int num)
{
	if (num == 0)
		return 0;
	else
		return (num % 10) * (num % 10) + ReturnSquared(num / 10);
}

int main()
{
	int num;
	scanf("%d", &num);

	printf("%d\n",ReturnSquared(num));
	getch();
}