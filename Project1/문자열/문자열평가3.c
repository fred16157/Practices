//100�� ������ ���ڿ��� �Է¹޾Ƽ� �����ڿ� ���ڸ� ����ϵ� �����ڴ� ��� �ҹ��ڷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=84&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char string[100];
	int i;
	scanf("%s", &string);
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= '1' && string[i] <= '9')
		{
			printf("%c", string[i]);
		}
		else if (string[i] >= 'A' && string[i] <= 'Z')
		{
			printf("%c", string[i] + 32);
		}
	}
	getch();
}