//�� ���� ������ �Է¹޾� ���밪�� �� ū ���� ����ϰ� �� ���� �Ǽ��� �Է¹޾� ���밪�� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �Ǽ��� �Ҽ��� ���� 2�ڸ����� ����Ѵ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=218&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void PrintAbs(int left, int right)
{
	if (abs(left) <= abs(right))
	{
		printf("%d\n", right);
	}
	else
	{
		printf("%d\n", left);
	}
}

void PrintfAbs(float left, float right)
{
	if (fabs(left) >= fabs(right))
	{
		printf("%.2f", right);
	}
	else
	{
		printf("%.2f", left);
	}
}

int main()
{
	int num1, num2;
	float _num1, _num2;
	scanf("%d %d", &num1, &num2);
	scanf("%f %f", &_num1, &_num2);
	PrintAbs(num1, num2);
	PrintfAbs(_num1, _num2);
	getch();
}