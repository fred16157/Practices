//10 이하의 과목수 n을 입력받은 후 n개 과목의 점수를 입력받아서 평균을 구하여 출력하고 평균이 80점이상이면 "pass", 80점 미만이면 "fail"이라고 출력하는 프로그램을 작성하시오.
//평균은 반올림하여 소수 첫째자리까지 출력한다.​
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=183&sca=10
#include <stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		int Score = 0;
		scanf_s("%d", &Score);
		sum += Score;
	}
	printf("avg : %.1f\n", (float)sum / num);
	if (sum / num >= 80)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	getch();
}