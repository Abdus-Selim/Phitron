#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int charge, n, i, j, min = 0;
    char ch;
    // scanf("%d", &charge);
    scanf("%d", &n);
    int arr[100];
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i], &ch);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 60)
        {
            arr[i] = 60 - arr[i];
            min = arr[i] + (20 * 2) + (20 * 3);
            printf("%d minutes\n", min);
        }
        else if (arr[i] < 80 && arr[i] >= 60)
        {
            arr[i] = (80 - arr[i]) * 2;
            min = arr[i] + (20 * 3);
            printf("%d minutes\n", min);
        }
        else if (arr[i] >= 80)
        {
            arr[i] = (100 - arr[i]) * 3;
            min = arr[i];
            printf("%d minutes\n", min);
        }
    }

    return 0;
}