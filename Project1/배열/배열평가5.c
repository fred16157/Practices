//6���� �����Ը� �Է¹޾� �������� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//����� �ݿø��Ͽ� �Ҽ� ù°�ڸ������� �Ѵ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=54&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float nums[6];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%f ", &nums[i]);
	}

	printf("%.1f", (nums[0] + nums[1] + nums[2] + nums[3] + nums[4] + nums[5]) / 6);
	getch();
}