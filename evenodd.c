#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    
    int n, ctr = 0, sum = 0;
    int i, j, k;

    scanf("%d", &n);
    char arr1[n];

    fgets(arr1, sizeof(arr1),stdin);

    for (i = 0; i < n; i++)
    {
        ctr = 0;
        for (j = 0, k = n; j < k + 1; j++)
        {
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                    sum = ctr;
                }
            }
        }
    }
    printf("%d ", (n - (sum + 1)));

    printf("\n\n");
}