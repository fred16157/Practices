//���ڿ��� �Է¹ް� ������ �Է� �޾Ƽ� ���ڿ��� �� �ں��� ������ŭ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �Է¹��� ������ ���ڿ��� ���̺��� ũ�ٸ� �� �ں��� �� ó������ ��� ����Ѵ�.
//(���ڿ� ���̴� �ִ� 100�� �����̴�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=233&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i;
	int count;

	scanf("%s %d", &string, &count);

	for (i = strlen(string) - 1; i >= count-1 ; i--)
	{
		printf("%c", string[i]);
	}
	getch();
}