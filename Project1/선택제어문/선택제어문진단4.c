//����ü���� �����԰� 50.80kg ���ϸ� Flyweight 61.23kg ���ϸ� Lightweight, 72.57kg ���ϸ� Middleweight, 88.45kg ���ϸ� Cruiserweight, 88.45kg �ʰ��� Heavyweight��� ����.
//�����Ը� �Է¹޾� ü���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=168&sca=1050
#include <stdio.h>

int main()
{
	int Weight = 0;
	scanf_s("%f", &Weight);

	if (Weight <= 50.8)
	{
		printf("Flyweight");
	}
	else if (Weight <= 61.23)
	{
		printf("Lightweight");
	}
	else if (Weight <= 72.57)
	{
		printf("Middleweight");
	}
	else if (Weight <= 88.45)
	{
		printf("Cruiserweight");
	}
	else if (Weight > 88.45)
	{
		printf("Heavyweight");
	}
	getch();
}