//자연수 n을 입력받아서 n개의 줄에 n+1개의 숫자 혹은 문자로 채워서 다음과 같이 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=191&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i, j;
	int Count = 0, ASCIICount = 0;
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i; j++)
		{
			printf("%d ", ++Count);
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("%c ", 'A'+ASCIICount);
			ASCIICount++;
			if (ASCIICount >= 26)
			{
				ASCIICount = 0;
			}
		}
		printf("\n");
	}
	getch();
}