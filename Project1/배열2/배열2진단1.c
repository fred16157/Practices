//���� �빮�ڸ� �Է¹޴ٰ� �빮�� �̿��� ���ڰ� �ԷµǸ� �Է��� �ߴ��ϰ�
//���� �빮�ڵ鿡 ���Ͽ� 1�� �̻� �Էµ� �� ���ڿ� �� ������ ������ ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=201&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int counts[26] = { 0, };
	int i;
	while (1)
	{
		char newchar;
		scanf("%c ", &newchar);
		if ((int)newchar - 65 > 26 || (int)newchar - 65 < 0)
		{
			break;
		}
		counts[(int)newchar - 65]++;
	}

	for (i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			printf("%c : %d\n", (char)i + 65, counts[i]);
		}
	}
	getch();
}