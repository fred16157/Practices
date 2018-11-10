//국어 영어 수학 컴퓨터 과목의 점수를 정수로 입력받아서 총점과 평균을 구하는 프로그램을 작성하시오. 
//(단 평균의 소수점 이하는 버림 한다.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=11&sca=1030
#include<stdio.h>

int main()
{
	int nums[4] = { 0,0,0,0 };
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &nums[i]);
	}
	printf("sum %d\n", nums[0] + nums[1] + nums[2] + nums[3]);
	printf("avg %d\n", (nums[0] + nums[1] + nums[2] + nums[3]) / 4);
	getch();
}