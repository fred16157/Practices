//���� �ٸ� �� ���� ������ �־�����. �� ������ �Է¹޾� ū ���� 2�� ���� ���� �����ϰ� ���� ���� 2�� ���Ͽ� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(������ ���� ȣ���� �̿��� �Լ��� �ۼ��Ͽ� ���� �����ϰ� ����� �����Լ����� �Ѵ�.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=214&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Change(int *num1, int *num2)
{
	*num1 *= 2;
	*num2 /= 2;
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	Change(&num1, &num2);

	printf("%d %d", num1, num2);
	getch();
}