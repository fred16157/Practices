//�� ������ �Է¹޾� ù ��° ���� ��ġ���������ڸ� ����ϰ� �� ��° ���� ��ġ���ҿ����ڸ� ����Ͽ� ����ϰ� �ٲ� ���� �ٽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=14&sca=1030
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf_s("%d %d", &num1, &num2);
	printf("%d %d\n", ++num1, num2--);
	printf("%d %d\n", num1, num2);
	getch();
}