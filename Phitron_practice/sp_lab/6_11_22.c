#include <stdio.h>

int main()
{
    int i, k, m, j, r, c, nums[10][10];
    // int nums[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    scanf("%d", &m);
    scanf("%d%d", &r, &c);
    for (k = 1; k <= m; k++)
    {

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &nums[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d     ", nums[i][j]);
            }
            printf("\n");
        }
    }
    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         printf("%d ", nums[i][j]);
    //     }
    //     printf("\n");
    // }

    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         printf("%d  ", nums[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}