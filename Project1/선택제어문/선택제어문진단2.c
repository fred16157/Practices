//“몸무게+100-키”를 비만수치 공식이라고 하자.
//키와 몸무게를 자연수로 입력받아 첫 번째 줄에 비만수치를 출력하고, 비만수치가 0보다 크면 다음줄에 비만("Obesity")이라는 메시지를 출력하는 프로그램을 작성하시오. (출력형식은 아래 출력 예를 참고하세요.)
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=166&sca=1050
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