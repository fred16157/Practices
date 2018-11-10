//남자는 'M' 여자는 'F'로 나타내기로 하고 18세 이상을 성인이라고 하자.
//성별('M', 'F')과 나이를 입력받아 "MAN"(성인남자), "WOMAN"(성인여자), "BOY"(미성년남자), "GIRL"(미성년여자)을 구분하여 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=170&sca=1050
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
		printf("성별을 제대로 입력해주세요");
		exit();
	}
	getch();
}