#include<stdio.h>
int main()
{
    int a,i, sum;
    scanf("%d", &a);
    int arr[a];
    for(i = 0; i<a; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i<a; i++)
    {
        sum = sum+arr[i];
        printf("%d ", sum);
        sum = arr[i];
    }
    return 0;
}