//���� �� ���� �Է¹ް�  ������ ��ũ�� �Լ��� �ۼ��Ͽ� �� ���� ���� ������ ���� ���� �������� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�ŵ������� '^'�� ǥ���ϱ�� �Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=223&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#define MACRO (X) ((X)*(X))
#include <stdio.h>

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	printf("(%d - %d) ^ 2 = &d", num1, num2, MACRO(num1 - num2));
	printf("(%d + %d) ^ 3 = %d", num1, num2, MACRO(num1 + num2));
}