#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int weight; 
    scanf("%d", &weight);

    if (weight == 2)
        printf("No\n");

    else if(weight % 2 == 0)
        printf("Yes\n");

    else printf("No\n");

    return 0;
}