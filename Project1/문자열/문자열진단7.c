//���ڿ��� �Է¹޾� ���ĺ� ���ڸ� ��� �빮�ڷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//���ڿ��� ���̴� 100�����̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=236&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i;
	scanf("%s", &string);
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			printf("%c", string[i]);
		}
		else if (string[i] >= 'a' && string[i] <= 'z')
		{
			printf("%c", string[i] - 32);
		}
	}
	getch();
}