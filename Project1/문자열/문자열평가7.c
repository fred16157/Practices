//������ ������ ���ڿ��� �Է¹޾� ������ ���� �и��Ͽ� ��ȣ�� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//���ڿ��� ���̴� 100�� �����̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=88&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i = 0;
	scanf("%s", &string);

	char *Token = strtok(string, " ");
	while (Token != NULL)
	{
		i++;
		printf("%d. %s\n", i, Token);
		Token = strtok(NULL, " ");
	}
	getch();
}