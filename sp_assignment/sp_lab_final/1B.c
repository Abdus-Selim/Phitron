#include<stdio.h>
#include<string.h>

int main()
{
    int i, length, max = 0;

    int arr[10] = {23, 11, 33, 21, 66, 34, 55, 9, 24, 1};
    for(i = 0; i< 10; i++)
    {
        printf("%d ", arr[i]);
        if(arr[i] == max && arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);


    return 0;
}