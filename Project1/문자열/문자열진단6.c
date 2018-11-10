//문자를 입력받아 알파벳 문자인 경우에는 그대로 출력하고 숫자인 경우는 아스키코드값을 출력하는 작업을 반복하다가 기타의 문자가 입력되면 종료하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=235&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int _char;
	while (1)
	{
		scanf("%c", &_char);
		if (('A' <= _char && _char <= 'Z') || ('a' <= _char && _char <= 'z'))
		{
			printf("%c\n", _char);
		}
		else if ('1' <= _char && _char <= '9')
		{
			printf("%d\n", _char);
		}
		else
		{
			break;
		}
	}
	getch();
}