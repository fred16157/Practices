//���ڴ� 'M' ���ڴ� 'F'�� ��Ÿ����� �ϰ� 18�� �̻��� �����̶�� ����.
//����('M', 'F')�� ���̸� �Է¹޾� "MAN"(���γ���), "WOMAN"(���ο���), "BOY"(�̼��Ⳳ��), "GIRL"(�̼��⿩��)�� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//���� �ּ� http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=170&sca=1050
#include <stdio.h>

int main()
{
	char Gender = '\0';
	int Age = 0;
	scanf_s("%c %d", &Gender, &Age);

	

	if (Gender == 'M')
	{
		if (Age >= 18)
		{
			printf("MAN");
		}
		else
		{
			printf("BOY");
		}
	}
	else if (Gender == 'F')
	{
		if (Age >= 18)
		{
			printf("WOMAN");
		}
		else
		{
			printf("GIRL");
		}
	}
	else
	{
		printf("������ ����� �Է����ּ���");
		exit();
	}
	getch();
}