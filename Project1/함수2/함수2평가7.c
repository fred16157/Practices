//�������� 3.141592�� ��ũ�� ����� �����ϰ� ���� ���̸� ���ϴ� ��ũ�� �Լ��� �ۼ��Ͽ� �������� �Է¹޾� ���� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�Ҽ� ��°�ڸ����� �ݿø�)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=81&sca=10c0

#define _CRT_SECURE_NO_WARNINGS
#define PIE 3.141592
#define MACRO (x) ((x)*(x) * PIE)
#include <stdio.h>

int main()
{
	int rad;
	printf("radius : ");
	scanf("%d", &rad);
	printf("%.3f", MACRO(rad));
	getch();
}