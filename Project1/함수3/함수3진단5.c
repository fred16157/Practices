//ù ��° ���� 1�̰� N��° ���� (N/2)��° ���� (N-1)��° ���� ������ ������ ������ �ִ�. 
//50 ������ �ڿ��� N�� �Է¹޾� ���ȣ���� �̿��Ͽ� �� �������� N��° ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(1 2 3 5 7 10 13 18 ��)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=228&sca=10d0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int nums[50];
int ReturnIndex(int index, int count)
{
	if (index < count)
	{
		nums[index + 1] = nums[(index + 1) / 2] + nums[index];
		index++;
		ReturnIndex(index, count);
	}
	else
	{
		return nums[index] / 2;
	}
}

int main()
{
	nums[0] = 1;
	int index = 0;
	int count;
	scanf("%d", &count);
	printf("%d",ReturnIndex(index, count));
	getch();
}