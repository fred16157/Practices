//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1013&sca=2020

#include <stdio.h>

int nums[10000];

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
    int min, max, i, sum = 0;
    int first = 0;
    scanf("%d %d", &min, &max);
    for (i = 0; i <= max; i++)
    {
        nums[i] = 0;
    }
    sort(max);

    for (i = min; i <= max; i++)
    {
        if (nums[i] == 0)
        {
            sum += i;
            if (first == 0)
            {
                first = i;
            }
        }
    }
    if (first != 0)
        printf("%d\n%d\n", sum, first);
    else
        printf("-1\n");
}