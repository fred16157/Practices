//두 개의 정수를 입력받아 큰 수의 제곱에서 작은 수의 제곱을 뺀 결과값을 출력하는 프로그램을 작성하시오. (두 정수를 전달받아 제곱의 차를 리턴하는 함수를 이용할 것)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=73&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Compare(int *left, int *right)
{
	if (*left <= *right)
	{
		return;
	}
	else
	{
		int temp = *left;
		*left = *right;
		*right = temp;
	}
}

int Return(int num1, int num2)
{
	return (num2 * num2) - (num1 * num1);
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	Compare(&num1, &num2);
	printf("%d", Return(num1, num2));
	getch();
}