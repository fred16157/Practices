//��������+100-Ű���� �񸸼�ġ �����̶�� ����.
//Ű�� �����Ը� �ڿ����� �Է¹޾� ù ��° �ٿ� �񸸼�ġ�� ����ϰ�, �񸸼�ġ�� 0���� ũ�� �����ٿ� ��("Obesity")�̶�� �޽����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (��������� �Ʒ� ��� ���� �����ϼ���.)
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=166&sca=1050
#include <stdio.h>

int main()
{
	int Height = 0, Weight = 0;
	scanf_s("%d %d", &Height, &Weight);

	printf("%d", Weight + 100 - Height);
	if (Weight + 100 - Height > 0)
	{
		printf("Obesity");
	}
	getch();
}