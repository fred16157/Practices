//�� ���� �Ǽ��� �Է¹޾�
//���� ū ���� �ø��� ������ ����ϰ�
//���� ���� ���� ������ ������ ����� ��
//���� ���� �ݿø��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//�ԷµǴ� �Ǽ��� - 1000�̻� 1000�����̴�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=220&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int Large_Num(float a, float b, float c)
{
	if (a > b && a > c)
	{
		return ceil(a);
	}
	else if (b > a && b > c)
	{
		return ceil(b);
	}
	else if (c > a && c > b)
	{
		return ceil(c);
	}
}

int Small_Num(float a, float b, float c)
{
	if (a < b && a < c)
	{
		return floor(a);
	}
	else if (b < a && b < c)
	{
		return floor(b);
	}
	else if (c < a && c < b)
	{
		return floor(c);
	}
}

int Middle_Num(float a, float b, float c)
{
	if (b > a < c || c > a < b)
	{
		return (int)a;
	}
	else if (a > b < c || c > b < a)
	{
		return (int)b;
	}
	else
	{
		return (int)c;
	}
}

int main()
{
	float x, y, z;
	scanf("%f %f %f", &x, &y, &z);
	printf("%d %d %d", Large_Num(x, y, z), Small_Num(x, y, z), Middle_Num(x, y, z));
	getch();
}