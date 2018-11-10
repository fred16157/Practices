//100 이하의 양의 정수만 입력된다. while 문을 이용하여 1부터 입력받은 정수까지의 합을 구하여 출력하는 프로그램을 작성하시오.
//문제 주소 http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=174&sca=1060
#include <stdio.h>

int main()
{
	int MaxCount = 0;
	scanf_s("%d", &MaxCount);
	
	int Count = 0;
	int sum = 0;
	while (Count < MaxCount)
	{
		Count++;
		sum += Count;
	}
	printf("%d", sum);
	getchar();
}