//���ڿ� "~!@#$^&*()_+|" �� ����ϴ� �Լ��� �ۼ��ϰ� ������ �Է¹޾� �Է¹��� ����ŭ �Լ��� ȣ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=208&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printstring()
{
	printf("~!@#$^&*()_+|\n");
}

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		printstring();
	}
	getch();
}