//�Ʒ��� ���� ���� �̸��� ����ϰ� ���ڸ� �Է¹޾� �ش��ϴ� ������ ������ ����ϴ� �۾��� �ݺ��ϴٰ� �ش��ϴ� ��ȣ �̿��� ���ڰ� �ԷµǸ� "none"��� ����� �� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//* �� ������ ���� :
//���ѹα� = ����(Seoul)
//�̱� = ������(Washington)
//�Ϻ� = ����(Tokyo)
//�߱� = �ϰ�(Beijing)
#include <stdio.h>

int main()
{
	while (1)
	{
		printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber?");
		int num = 0;
		scanf_s("%d", &num);
		printf("\n");

		if (num != 1 && num != 2 && num != 3 && num != 4)
		{
			printf("none");
			break;
		}

		switch (num)
		{
		case 1:
			printf("Seoul\n");
			break;
		case 2:
			printf("Washington\n");
			break;
		case 3:
			printf("Tokyo\n");
			break;
		case 4:
			printf("Beijing");
			break;
		}
	}
}