#include <stdio.h>

// Declaring function that returns something
int sum(int a, int b);

int main()
{
    int x, y;
    printf("Please enter first number : ");
    scanf("%d", &x);
    printf("Please enter second number : ");
    scanf("%d", &y);

    int s = sum(x , y);
    printf("Sum = %d\n", s);

    return 0;
}

int sum(int a , int b){
    return a + b;
}