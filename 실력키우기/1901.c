//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1174&sca=2020

#include <stdio.h>

int nums[1000000];

void sort()
{
    int i, j;
    nums[1] = 1;
    for (i = 2; i <= 1000000; i++)
    {
        if (nums[i] == 0)
        {
            for (j = i + i; j <= 1000000; j += i)
            {
                nums[j] = 1;
            }
        }
    }
}

int main()
{
    int arr[100];
    int count;
    int i, j;
    sort();

    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < count; i++)
    {
        for (j = 1; j < arr[i]; i++)
        {
            if (nums[arr[i] - j] == 0 || nums[arr[i] + j] == 0)
            {
                if (nums[arr[i] - j] == 0)
                    printf("%d", arr[i] - j);
                if (nums[arr[i] + j] == 0)
                    printf("%d", arr[i] + j);
                printf("\n");
                break;
            }
        }
    }
}