//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=351&sca=2020

#include <stdio.h>

int nums[40];

int addDivided(int maxCount, int query)
{
    int i;
    int sum = 0;
    for (i = 0; i < maxCount; i++)
    {
        if (query % nums[i] == 0)
        {
            sum += nums[i];
        }
    }
    return sum;
}

int addMultiplied(int maxCount, int query)
{
    int i;
    int sum;
    for (i = 0; i < maxCount; i++)
    {
        if (nums[i] % query == 0)
        {
            sum += nums[i];
        }
    }
    return sum;
}

int main()
{
    int maxCount;
    int query;
    int i;
    scanf("%d", &maxCount);

    for (i = 0; i < maxCount; i++)
    {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &query);

    printf("%d\n%d\n", addDivided(maxCount, query), addMultiplied(maxCount, query));
}