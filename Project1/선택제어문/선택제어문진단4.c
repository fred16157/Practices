//복싱체급은 몸무게가 50.80kg 이하를 Flyweight 61.23kg 이하를 Lightweight, 72.57kg 이하를 Middleweight, 88.45kg 이하를 Cruiserweight, 88.45kg 초과를 Heavyweight라고 하자.
//몸무게를 입력받아 체급을 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=168&sca=1050
#include <stdio.h>

int main()
{
	int Weight = 0;
	scanf_s("%f", &Weight);

	if (Weight <= 50.8)
	{
		printf("Flyweight");
	}
	else if (Weight <= 61.23)
	{
		printf("Lightweight");
	}
	else if (Weight <= 72.57)
	{
		printf("Middleweight");
	}
	else if (Weight <= 88.45)
	{
		printf("Cruiserweight");
	}
	else if (Weight > 88.45)
	{
		printf("Heavyweight");
	}
	getch();
}