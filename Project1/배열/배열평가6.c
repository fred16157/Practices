//6���� ���ڹ迭�� ����� {'J' 'U' 'N' 'G' 'O' 'L'} ���� �ʱ�ȭ �� �� ���� �� ���� �Է¹޾� �迭������ ��ġ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//ù ��° ��ġ�� 0���̸� �迭�� ���� ���ڰ� �ԷµǸ� "none" ��� �޽����� ����ϰ� ������ ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=55&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>\

int main()
{
	char chars[6] = { 'J', 'U', 'N', 'G', 'O', 'L' };
	char query;
	int i;
	scanf("%c", &query);
	for (i = 0; i < 6; i++)
	{
		if (chars[i] == query)
		{
			printf("%d", i);
			getch();
			return 0;
		}
	}
	printf("none");
	getch();
}