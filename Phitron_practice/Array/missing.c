// Find out the missing value in an array

#include <stdio.h>

int main()
{

    int i, n, position;
    int array[2000000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        array[i] = 0;
    }
    for (i = 1; i < n; i++)
    {
        scanf("%d", &position);
        array[position] = 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (array[i] == 0)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}