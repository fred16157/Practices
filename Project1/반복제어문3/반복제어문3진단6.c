//자연수 n을 입력받아 다음과 같이 영문자를 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=190&sca=1080
#include <stdio.h>

int main()
{
	int num = 0;
	int i, j;
	int ASCIICount = 0;
	scanf_s("%d", &num);

	for (i = 0; i <= num; i++)
	{
		for (j = 0; j < num - i; j++)
		{
			printf("%c", 'A'+ASCIICount);
			ASCIICount++;
			if (ASCIICount >= 26) ASCIICount = 0;
		}
		printf("\n");
	}
	getch();
}