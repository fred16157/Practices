//100 ���� ������ ������ �� �ִ� �迭�� �����ϰ� ������ ���ʷ� �Է¹޴ٰ� 0 �� �ԷµǸ� 0 �� �����ϰ� �� ������ �Էµ� ������ ���� ���߿� �Էµ� �������� ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=195&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100] = { 0, };
	int i;
	for (i = 0; i < 100; i++)
	{
		scanf("%d ", &nums[i]);
		if (nums[i] == 0)
		{
			break;
		}
	}
	for (int i = 99; i >= 0; i--)
	{
		if(nums[i] == 0)
		{
			continue;
		}
		printf("%d ", nums[i]);
	}
	getch();
}