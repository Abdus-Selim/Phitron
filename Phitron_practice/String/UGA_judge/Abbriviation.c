#include <stdio.h>
#include <string.h>

int main()
{

    int num, i, length;
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        char name[102];
        scanf("%s", name);

        int length = strlen(name);
        if (length <= 10)
            printf("%s\n", name);
        else if (length > 10)
        {
            printf("%c%d%c\n", name[0], length - 2, name[length - 1]);
        }
    }

    return 0;
}
