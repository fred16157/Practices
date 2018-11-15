//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=452&sca=2020

#include <stdio.h>

int isPrime(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int nums[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (nums[i] == 1)
        {
            printf("number one\n");
        }
        else if (isPrime(nums[i]))
        {
            printf("prime number\n");
        }
        else
        {
            printf("composite number\n");
        }
    }
}