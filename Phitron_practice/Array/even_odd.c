// Find out the number of evens and odds in an array

#include <stdio.h>

int main()
{

    int n, i;
    int e_c = 0;
    int o_c = 0;
    int array[n];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            e_c++;
            printf("%dth position value is an even.\n", i);
        }
        else
        {
            o_c++;
        }
    }
    printf("Number of evens = %d\n", e_c);
    printf("Number of odds = %d\n", o_c);

    return 0;
}