//1�ݺ��� 6�ݱ����� ��������� ������ �� �� ���� �� ��ȣ�� �Է¹޾� �� �� ��������� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
//�ݺ� ��������� �ʱⰪ���� 1�ݺ��� ���ʷ� 85.6 79.5 83.1 80.0 78.2 75.0���� �ʱ�ȭ�ϰ�
//����� �Ҽ� �� ��° �ڸ����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� �Ѵ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=196&sca=1090

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float avgs[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	int num1;
	int num2;
	scanf("%d %d", &num1, &num2);

	printf("%.1f", avgs[num1 - 1] + avgs[num2 - 1]);
	getch();
}