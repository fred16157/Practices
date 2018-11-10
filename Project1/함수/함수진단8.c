//10 이하의 두 개의 정수를 입력받아서 작은 수부터 큰 수까지의 구구단을 차례대로 출력하는 프로그램을 구조화하여 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=215&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//작은 수를 왼쪽에 할당, 큰 수는 오른쪽에 할당
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
		return;
	}
}

//구구단 출력
void PrintDan(int less, int more)	
{
	for (int i = less; i <= more; i++)
	{
		printf("==%ddan==\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d\n", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	Compare(&num1, &num2);
	PrintDan(num1, num2);
	getch();
}