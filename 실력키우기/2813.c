//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2079&sca=2020

#include <stdio.h>

int nums[2000000];

void sort(int n)
{
    int i, j;
    nums[1] = 1;
    for (i = 2; i <= n; i++)
    {
        if (nums[i] == 0)
        {
            for (j = i + i; j <= n; j += i)
            {
                nums[j] = 1;
            }
        }
    }
}

int main()
{
    int min, max, i, count = 0;
    scanf("%d %d", &min, &max);
    for (i = 0; i < max; i++)
    {
        nums[i] = 0;
    }
    sort(max);

    for (i = min; i <= max; i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
}