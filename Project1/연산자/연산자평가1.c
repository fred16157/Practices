//���� ���� ���� ��ǻ�� ������ ������ ������ �Է¹޾Ƽ� ������ ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//(�� ����� �Ҽ��� ���ϴ� ���� �Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=11&sca=1030
#include<stdio.h>

int main()
{
	int nums[4] = { 0,0,0,0 };
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &nums[i]);
	}
	printf("sum %d\n", nums[0] + nums[1] + nums[2] + nums[3]);
	printf("avg %d\n", (nums[0] + nums[1] + nums[2] + nums[3]) / 4);
	getch();
}