#include <stdio.h>

int main()
{
    int arr[100], i, j, size;
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("\n%d ", arr[i]);
    }

    return 0;
}