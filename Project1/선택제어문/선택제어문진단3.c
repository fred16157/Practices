//���̸� �Է¹޾� 20�� �̻��̸� "adult"��� ����ϰ� �׷��� ������ �� ���Ŀ� ������ �Ǵ����� "�� years later"��� �޽����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=167&sca=1050
#include <stdio.h>

int main()
{
	int Age = 0;
	scanf_s("%d", &Age);
	if (Age >= 20)
	{
		printf("adult");
	}
	else
	{
		printf("%d years later", 20 - Age);
	}
	getch();
}