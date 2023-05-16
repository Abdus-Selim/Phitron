#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    gets(name);
    int length = strlen(name) - 1;
    puts(name);

    printf("Then length of the string is : %d\n", length);

    if(length>10)
    {
        printf("%c%d%c", name[0], length - 2, name[length-1]);
    }

    return 0;
}