//���ڸ� �Է¹޾� ���ĺ� ������ ��쿡�� �״�� ����ϰ� ������ ���� �ƽ�Ű�ڵ尪�� ����ϴ� �۾��� �ݺ��ϴٰ� ��Ÿ�� ���ڰ� �ԷµǸ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=235&sca=10e0

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