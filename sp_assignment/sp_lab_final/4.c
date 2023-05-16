#include <stdio.h>

int multiply()
{
    int x, y;
    scanf("%d%d", &x, &y);

    int ans = x * y;

    printf("%d\n", ans);
    return 0;
}

int main()
{

    multiply();

    return 0;
}