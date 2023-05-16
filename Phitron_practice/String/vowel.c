#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, counter = 0;
    char name[100];

    fgets(name, sizeof(name), stdin);
    puts(name);

    while (name[i] != '\0')
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            counter++;
        }
        i++;
    }
    printf("%d ", counter);

    return 0;
}
