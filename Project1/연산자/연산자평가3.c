//���簢���� ���ο� ������ ���̸� ������ ������ �Է¹��� �� ������ ���̴� 5 ������Ű��
//������ ���̴� 2���Ͽ� ������ �� ������ ���� ������ ���� ���̸� ���ʷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=13&sca=1030
#include <stdio.h>

int main()
{
	int Width = 0, Length = 0;
	scanf_s("%d %d", &Width, &Length);
	printf("width = %d\n", Width + 5);
	printf("length = %d\n", Length * 2);
	printf("area = %d\n", (Width + 5) * (Length * 2));
	getch();
}