//���ڿ�(100�� ����)�� �Է¹��� �� ������ �Է¹޾� �ش���ġ�� ���ڸ� �����ϰ� ����ϴ� �۾��� �ݺ��ϴٰ� ���� 1���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//ù ��° ������ ��ġ�� 1�̸� ���� �Է¹��� ��ȣ�� ���ڿ��� ���� �̻��̸� ������ ���ڸ� �����Ѵ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=87&sca=10e0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	scanf("%s", &string);
	while (strlen(string) >= 1)
	{
		int index, i = 0;
		scanf("%d", &index);
		string[index - 1] = '\0';
		for (int i = index - 1; i < strlen(string) - 1; i++)
		{
			string[i] = string[i + 1];
		}
		string[i + 2] = '\0';
		printf("%s", string);
	}
	getch();
}