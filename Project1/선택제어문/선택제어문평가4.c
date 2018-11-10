//1번은 개, 2번은 고양이, 3번은 병아리로 정하고 번호를 입력하면 번호에 해당하는 동물을 영어로 출력하는 프로그램을 작성하시오.
//해당 번호가 없으면 "I don't know."라고 출력한다.
//개 - dog
//고양이 - cat
//병아리 - chick​
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=23&sca=1050
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	if (num == 1)
	{
		printf("dog");
	}
	else if (num == 2)
	{
		printf("cat");
	}
	else if (num == 3)
	{
		printf("chick");
	}
	else
	{
		printf("I don't know.");
	}
	getch();
}