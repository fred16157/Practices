//���ڿ��� �Է� �޾Ƽ� ���ڼ���ŭ ���������� �� ���� ȸ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���ڿ��� ���̴� 100�����̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=238&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i, j = 0;
	int temp;
	scanf("%s", &string);

	for (i = 0; i < strlen(string); i++)
	{
		temp = string[strlen(string) - 1];
		for (j = strlen(string) - 1; j > 0; j--)
		{
			string[j] = string[j - 1];
		}
		string[0] = temp;
		printf("%s\n", string);
	}
	getch();
}