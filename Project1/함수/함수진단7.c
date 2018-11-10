//서로 다른 두 개의 정수가 주어진다. 두 정수를 입력받아 큰 수는 2로 나눈 몫을 저장하고 작은 수는 2를 곱하여 저장한 후 출력하는 프로그램을 작성하시오.(참조에 의한 호출을 이용한 함수를 작성하여 값을 수정하고 출력은 메인함수에서 한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=214&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Change(int *num1, int *num2)
{
	*num1 *= 2;
	*num2 /= 2;
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	Change(&num1, &num2);

	printf("%d %d", num1, num2);
	getch();
}