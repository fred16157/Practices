//�� ���� �Ǽ��� �Է¹޾� ������ �������� ���ϰ� �� ������ ���̿� �����ϴ� ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.// 
//��, �Է¹޴� �� �Ǽ��� ����̸� �� ������ ���̶�� ���� �� �������� �����Ѵ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=76&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintInts(float min, float max)
{
	int count = 0;
	for (int i = min; i < max; i++)
	{
		count++;
	}
	printf("%d", count - 1);
}

int main()
{
	float min, max;
	scanf("%f %f", &min, &max);
	PrintInts(sqrt(min), sqrt(max));
	getch();
}