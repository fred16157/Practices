//33부터 127 까지의 숫자를 계속 입력받아 입력받은 숫자의 아스키코드에 해당하는 문자를 출력하다가 범위를 벗어나는 입력이 들어오면 종료하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=230&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	while (1)
	{
		int _char;
		printf("ASCII code =? ");
		scanf("%d", &_char);
		if (33 > _char || 127 < _char)
		{
			break;
		}
		printf("%c\n", _char);
	}
	printf("exit");
	getch();
}