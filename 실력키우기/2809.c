//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=450&sca=2020

#include <stdio.h>

void printNums(int num)
{
    int i;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int num;
    scanf("%d", &num);
    printNums(num);
}