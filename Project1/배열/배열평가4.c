//100���� ������ �Է¹��� �� �ִ� �迭�� ������ �� ������ ���ʷ� �Է� �޴ٰ� -1�� �ԷµǸ� �Է��� �ߴ��ϰ� -1�� ������ ������ �� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�Է¹��� ������ -1�� �����ϰ� 3�� �̸��� ��쿡�� -1�� �����ϰ� �Է¹��� ������ ��� ����Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=53&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nums[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		int num;
		scanf("%d ", &num);
		if (num == -1)
		{
			break;
		}
		nums[i] = num;
	}
	int maxi = i;
	for (i -= 3; i < maxi ; i++)
	{
		printf("%d ", nums[i]);
	}
	getch();
}