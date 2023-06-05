#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *Substr(char str[], int start, int len)
{
    int i;
    char *str_result = malloc(len + 1);

    for (i = 0; i < len; i++)
        str_result[i] = str[start + i];
    str_result[len] = '\0';

    return str_result;
}

int main()
{
    char *substring = Substr("Metropolitan", 5, 4);
    printf("%s\n", substring);
    return 0;
}