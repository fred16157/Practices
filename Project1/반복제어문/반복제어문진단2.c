//100 ������ ���� ������ �Էµȴ�. while ���� �̿��Ͽ� 1���� �Է¹��� ���������� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=174&sca=1060
#include <stdio.h>

int main()
{
	int MaxCount = 0;
	scanf_s("%d", &MaxCount);
	
	int Count = 0;
	int sum = 0;
	while (Count < MaxCount)
	{
		Count++;
		sum += Count;
	}
	printf("%d", sum);
	getchar();
}