//������ ������ 100���� ������ ���ڿ��� �Է¹޾� ������ �̷�� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=237&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i;
	int Count = 0;
	scanf("%s", &string);
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] == ' ')
		{
			Count++;
		}
	}
	printf("%d", Count);
	getch();
}