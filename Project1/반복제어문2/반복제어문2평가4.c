//100 ������ �ڿ��� n�� �Է¹ް� n���� ������ �Է¹޾� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//(����� �ݿø��Ͽ� �Ҽ� ��°�ڸ����� ����ϵ��� �Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=33&sca=1070
#include <stdio.h>

int main()
{
	int sum = 0;
	int MaxCount = 0;
	scanf_s("%d", &MaxCount);
	for (int i = 0; i < MaxCount; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		sum += num;
	}
	printf("%.2f", (float)sum / MaxCount);
	getch();
}