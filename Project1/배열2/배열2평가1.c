//������ �ֻ��� ���̸� �ϴٰ� �ֻ����� 10�� ������ �� ���ڰ� �� ���� ���Դ��� �˾ƺ����� �Ѵ�. �ѹ� ���� ������ ���� �ֻ����� ���ڸ� �Է¹޾Ƽ� �� ���ڰ� �� ���� ���Դ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=60&sca=10a0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int counts[6] = { 0, };
	int i;

	for (i = 0; i < 10; i++);
	{
		int num;
		scanf("%d ", &num);
		counts[num - 1]++;
	}

	for (i = 0; i < 6; i++)
	{
		printf("%d : %d\n", i + 1, counts[i]);
	}
	getch();
}