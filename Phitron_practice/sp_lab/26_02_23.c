#include <stdio.h>

void fibonacci(int first, int second, int limit)
{

    int fibo = first + second;
    first = second;
    second = fibo;
    printf("%d ", fibo);

    if (fibo < limit)
    {

        fibonacci(first, second, limit);
    }

    printf("Hello\n");
}

int main()
{
    fibonacci(0, 1, 8);
    printf("Hi\n");
}