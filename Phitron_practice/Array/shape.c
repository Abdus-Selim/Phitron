#include <stdio.h>

int main()
{
    int n, i, T, c = 0;
    printf("Enter any number n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &T);
    }

    // logic
    while (n>0)
    {
        if (T % i == 0)
        {
            c++;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (c == 2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
