//33���� 127 ������ ���ڸ� ��� �Է¹޾� �Է¹��� ������ �ƽ�Ű�ڵ忡 �ش��ϴ� ���ڸ� ����ϴٰ� ������ ����� �Է��� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=230&sca=10e0

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