//�� ���� ������ ���޹޾� �ִ밪�� ���Ͽ� �����ϴ� �Լ��� �ۼ��ϰ� �� ������ �Է¹޾� �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�̰� �� ���Ҹ���
//�� �μ��� �ΰ��� �޴°ǵ�
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=211&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintMax(int x,int y,int z)
{
	int nums[3] = { x,y,z };
	int Max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (nums[i] >= Max)
		{
			Max = nums[i];
		}
	}
	printf("%d", Max);
}

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	PrintMax(x, y, z);
	getch();
}