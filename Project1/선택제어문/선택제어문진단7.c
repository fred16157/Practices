//���� �빮�ڸ� �Է¹޾� 
//'A'�̸� ��Excellent��,
//'B'�̸� ��Good��,
//'C'�̸� ��Usually��,
//'D'�̸� ��Effort��,
//'F'�̸� ��Failure��,
//�� �� �����̸� ��error�� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=171&sca=1050
#include <stdio.h>

int main()
{
	char Grade = '\0';
	scanf_s("%c", &Grade);

	if (Grade == 'A')
	{
		printf("Excellent");
	}
	else if (Grade == 'B')
	{
		printf("Good");
	}
	else if (Grade == 'C')
	{
		printf("Usually");
	}
	else if (Grade == 'D')
	{
		printf("Effort");
	}
	else if (Grade == 'F')
	{
		printf("Failure");
	}
	else
	{
		printf("Error");
	}
	getch();
}