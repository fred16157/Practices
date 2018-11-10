//정수를 계속 입력받다가 100 이상의 수가 입력이 되면 마지막 입력된 수를 포함하여 합계와 평균을 출력하는 프로그램을 작성하시오.
//(평균은 반올림하여 소수 첫째자리까지 출력한다.)
#include <stdio.h>

int main()
{
	int num = 0;
	int Count = 0;
	int sum = 0;

	while (1)
	{
		scanf_s("%d", &num);
		sum += num;
		Count++;
		if (num >= 100)
		{
			break;
		}
	}
	printf("%d\n%f", sum, (float)sum / Count);
	getch();
}
