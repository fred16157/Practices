//�μ��� �⿵���� Ű�� �����Ը� �Է¹޾� �μ��� Ű�� ũ�� �����Ե� ũ�� 1 �׷��� ������ 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=15&sca=1030
#include <stdio.h>

int main()
{
	int Height1 = 0, Weight1 = 0;
	int Height2 = 0, Weight2 = 0;

	scanf_s("%d %d", &Height1, &Weight1);
	scanf_s("%d %d", &Height2, &Weight2);

	printf("%d", Height1 > Height2 && Weight1 > Weight2 ? 1 : 0);
	getch();
}