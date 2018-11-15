//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=931&sca=2020

#include <stdio.h>

int getLcm(int x, int y, int gcd)
{
    return x * y / gcd;
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
    printf("%d\n%d\n", getGcd(x, y), getLcm(x, y, getGcd(x, y)));
}