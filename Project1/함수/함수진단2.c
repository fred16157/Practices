//�������� ���̸� ���޹޾� ���̸� ����ϴ� �Լ��� �ۼ��ϰ� �������� ���̸� �Է¹޾� �Լ��� ȣ���Ͽ� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//(�������� 3.14�� �ϰ� �ݿø��Ͽ� �Ҽ� ��°�ڸ����� ����Ѵ�.���� ���� = ������ * ������ * �������̴�.)
//�ƴ� �Ľ�Į�� �ﰢ���� ���ĵ� �Ⱦ˷��ָ鼭 �̷��� �˷��ֳ�
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=209&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MakeCircle(int radius)
{
	printf("%.2f", radius * radius * 3.14);
}

int main()
{
	int num;
	scanf("%d", &num);
	MakeCircle(num);
	getch();
}