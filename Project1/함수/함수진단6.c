//������ ������� �Է¹޾� ������ ���� �Լ��� ȣ���Ͽ� 4Ģ����(+ - * /)�� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//('/'�� ���� ���� �κи� ����ϰ� 4Ģ���� �̿��� ���� ����� 0���� �Ѵ�.)
//�� if~else if~else ������ �ۼ��ϼ���.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=213&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintResult(int left, int right, char _operator)
{
	if (_operator == '+')
	{
		printf("%d + %d = %d", left, right, left + right);
	}
	else if (_operator == '-')
	{
		printf("%d - %d = %d", left, right, left - right);
	}
	else if (_operator == '*')
	{
		printf("%d * %d = %d", left, right, left * right);
	}
	else if (_operator == '/')
	{
		printf("%d / %d = %d", left, right, left / right);
	}
	else
	{
		printf("%d %c %d = 0", left, _operator, right);
	}
}

int main()
{
	int left, right; char _operator;
	scanf("%d %c %d", &left, &_operator, &right);
	PrintResult(left, right, _operator);
	getch();
}