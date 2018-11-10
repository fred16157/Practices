//삼각형의 밑변의 길이와 높이를 입력받아 넓이를 출력하고, "Continue? "에서 하나의 문자를 입력받아 그 문자가 'Y' 나 'y' 이면 작업을 반복하고 다른 문자이면 종료하는 프로그램을 작성하시오.
//(넓이는 반올림하여 소수 첫째자리까지 출력한다.)​
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=29&sca=1060
#include <stdio.h>

int main()
{
	while (1)
	{
		int Base = 0, Height = 0;
		printf("Base = ");
		scanf_s("%d", &Base);
		printf("Height = ");
		scanf_s("%d", &Height);
		printf("Triangle width = %d\n", Base * Height / 2);
		printf("Continue? ");
		char Continue = '\0';
		scanf_s("%c", &Continue);

		if (Continue != 'Y' && Continue != 'y')
		{
			break;
		}
	}
	getch();
}
