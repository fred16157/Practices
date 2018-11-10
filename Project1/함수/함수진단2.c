//반지름의 길이를 전달받아 넓이를 출력하는 함수를 작성하고 반지름의 길이를 입력받아 함수를 호출하여 넓이를 출력하는 프로그램을 작성하시오. 
//(원주율은 3.14로 하고 반올림하여 소수 둘째자리까지 출력한다.원의 넓이 = 반지름 * 반지름 * 원주율이다.)
//아니 파스칼의 삼각형은 수식도 안알려주면서 이런건 알려주네
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=209&sca=10b0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MakeCircle(int radius)
{
	printf("%.2f", radius * radius * 3.14);
}

int main()
{
	int num;
	scanf("%d", &num);
	MakeCircle(num);
	getch();
}