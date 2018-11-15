//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=678&sca=2020

#include <stdio.h>

int sortNums(int max, int query)
{
    int nums[10000] = {
        0,
    };
    int count = 0;
    int i;
    for (i = 1; i <= max; i++)
    {
        if (max % i == 0)
        {
            nums[count++] = i;
        }
    }

    for (i = 0; i < count; i++)
    {
        if (i == query - 1)
        {
            return nums[i];
        }
    }
    return 0;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", sortNums(num1, num2));
}