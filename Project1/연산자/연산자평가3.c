//직사각형의 가로와 세로의 길이를 정수형 값으로 입력받은 후 가로의 길이는 5 증가시키고
//세로의 길이는 2배하여 저장한 후 가로의 길이 세로의 길이 넓이를 차례로 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=13&sca=1030
#include <stdio.h>

int main()
{
	int Width = 0, Length = 0;
	scanf_s("%d %d", &Width, &Length);
	printf("width = %d\n", Width + 5);
	printf("length = %d\n", Length * 2);
	printf("area = %d\n", (Width + 5) * (Length * 2));
	getch();
}