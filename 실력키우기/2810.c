//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1759&sca=2020

#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp = *y;
    *y = *x;
    *x = tmp;
}

int getGcd(int x, int y)
{
    int r;
    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x < y)
    {
        swap(&x, &y);
    }
    printf("%d\n", (x / getGcd(x, y)) * (y / getGcd(x, y)));
}