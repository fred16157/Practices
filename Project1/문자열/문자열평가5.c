//�� ���� �ܾ �Է¹޾Ƽ� ���̰� �� �ܾ��� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//�ܾ��� ���̴� 100�� ���ϴ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=86&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string1[100], string2[100];
	scanf("%s %s", &string1, &string2);

	if (strlen(string1) >= strlen(string2))
	{
		printf("%d", strlen(string1));
	}
	else
	{
		printf("%d", strlen(string2));
	}
	getch();
}