//���� 10 ���� ������ �� �ִ� �迭�� ���� 1 ���� 10 ������ �����ϰ� ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=193&sca=1090
#include <stdio.h>

int main()
{
	int nums[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		nums[i] = i + 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}