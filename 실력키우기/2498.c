//http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1759&sca=2020

#include <stdio.h>

int arr[100000000];
int count;
int min1, min2;

void swap(int *x, int *y)
{
    int tmp = *y;
    *y = *x;
    *x = tmp;
}

void sort(int x, int y)
{
    int i;
    count = 0;
    for (i = x; i < y; i++)
    {
        if (y % i == 0 && i % x == 0)
        {
            arr[count++] = i;
        }
    }
}

void getSmallest()
{
    int i;
    int min = 100000000;
    for (i = 0; i < count; i++)
    {
        if (arr[i] + (arr[count - i]) < min)
        {
            min1 = i;
            min2 = count - i;
        }
    }
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    sort(x, y);
    getSmallest();
    printf("%d %d\n", min1, min2);
}