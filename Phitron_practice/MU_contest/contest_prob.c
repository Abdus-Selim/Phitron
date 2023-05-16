#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int length = 0, sum = 0;
    char n[1001];
    fgets(n, sizeof(n), stdin); // use fgets to read input from user
    length = strlen(n);
    for (int i = 0; n[i] != '\0'; i++)
    {
        sum = sum + ((int)n[i]);
    }

    printf("The sum of ASCII values of the characters in the input string is: %d\n", sum);
    return 0;
}