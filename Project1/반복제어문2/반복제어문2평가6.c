//�� ���� ������ �Է¹޾� �� ���� ����(�� ������ ����)�� 3�� ����̰ų� 5�� ����� ������ �հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=35&sca=1070
#include <stdio.h>

int main()
{
	int DefaultCount = 0;
	int MaxCount = 0;
	scanf_s("%d %d", &DefaultCount, &MaxCount);
	int sum = 0;
	int Count = 0;
	for (; DefaultCount <= MaxCount; DefaultCount++)
	{
		if (DefaultCount % 3 == 0 || DefaultCount % 5 == 0)
		{
			sum += DefaultCount;
			Count++;
		}
	}
	printf("sum : %d\navg : %.1f", sum, (float)sum / Count);
	getch();
}