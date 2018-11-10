//아래와 같이 나라 이름을 출력하고 숫자를 입력받아 해당하는 나라의 수도를 출력하는 작업을 반복하다가 해당하는 번호 이외의 숫자가 입력되면 "none"라고 출력한 후 종료하는 프로그램을 작성하시오.
//
//* 각 나라의 수도 :
//대한민국 = 서울(Seoul)
//미국 = 워싱턴(Washington)
//일본 = 동경(Tokyo)
//중국 = 북경(Beijing)
#include <stdio.h>

int main()
{
	while (1)
	{
		printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber?");
		int num = 0;
		scanf_s("%d", &num);
		printf("\n");

		if (num != 1 && num != 2 && num != 3 && num != 4)
		{
			printf("none");
			break;
		}

		switch (num)
		{
		case 1:
			printf("Seoul\n");
			break;
		case 2:
			printf("Washington\n");
			break;
		case 3:
			printf("Tokyo\n");
			break;
		case 4:
			printf("Beijing");
			break;
		}
	}
}