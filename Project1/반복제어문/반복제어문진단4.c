//������ ��� �Է¹޴ٰ� 100 �̻��� ���� �Է��� �Ǹ� ������ �Էµ� ���� �����Ͽ� �հ�� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����Ѵ�.)
#include <stdio.h>

int main()
{
	int num = 0;
	int Count = 0;
	int sum = 0;

	while (1)
	{
		scanf_s("%d", &num);
		sum += num;
		Count++;
		if (num >= 100)
		{
			break;
		}
	}
	printf("%d\n%f", sum, (float)sum / Count);
	getch();
}
