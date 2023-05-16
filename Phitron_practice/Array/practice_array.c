#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N, i, diff;
    scanf("%d", &N);
    int array[N];
    int m = array[0];
    if (N > 1)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d", &array[i]);
        }

        for (i = 0; i < N; i++)
        {
            if (array[i] > m)
            {
                m = array[i];
            }
        }

        for (i = 0; i < N; i++)
        {
            diff = m - array[i];
            printf("%d ", diff);
        }
    }

    return 0;
}