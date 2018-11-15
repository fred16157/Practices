//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=281&sca=2020

#include <stdio.h>

int nums[10];

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
    int maxCount;
    int i;
    int gcd, lcm;
    scanf("%d", &maxCount);

    for (i = 0; i < maxCount; i++)
    {
        scanf("%d", &nums[i]);
    }

    gcd = lcm = nums[0];
    for (i = 0; i < maxCount; i++)
    {
        gcd = getGcd(gcd, nums[i]);
        lcm = lcm / getGcd(lcm, nums[i]) * nums[i];
    }
    printf("%d %d\n", gcd, lcm);
}