//�ܾ�� ���� �� ���� �Է¹޾Ƽ� �ܾ�� �Է¹��� ���ڿ� ���� ���ڸ� ã�Ƽ� �� ��ġ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�ܾ�� ù ��° ������ ��ġ�� 0���� �ϰ� ã�� ���ڰ� ���� ���� ���� ó�� ������ ��ġ�� ����Ѵ�.
//���� ã�� ���ڰ� ���� ���� "No"��� ����Ѵ�.��ҹ��ڴ� �����Ǹ� �ܾ�� 100�� �����̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=85&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	char query;
	int i;
	scanf("%s %c", &string, &query);
	for (i = 0; i < strlen(string); i++)
	{
		if (string[i] == query)
		{
			printf("%d", i);
			break;
		}
	}
	getch();
}