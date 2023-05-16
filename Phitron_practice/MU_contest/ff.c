#include <stdio.h>
#include <string.h>
int main()
{
    char a[102];
    scanf("%s", &a);
    int length = strlen(a);
    for (int i = 0; i < length; i++)
    {
        printf("%c", a[i]);
        for (int j = 1; j <= length; j += 2)
            if (j == i)
            {
                printf("%c", a[i]);
                break;
            }
    }
    return 0;
}
