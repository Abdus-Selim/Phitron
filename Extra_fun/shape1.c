#include <stdio.h>

int main()
{
    int num, i, j;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i; j < num; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}