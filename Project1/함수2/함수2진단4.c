//���� ���̸� �Է¹޾� �������� ���̸� �Ҽ� ��°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//���� ���� = ������ * ������ * 3.14 ���� �̿��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=219&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintRadius(float num)
{
	printf("%.2f", sqrt(num / 3.14));
}

int main()
{
	float num;
	scanf("%f", &num);
	PrintRadius(num);
	getch();
}