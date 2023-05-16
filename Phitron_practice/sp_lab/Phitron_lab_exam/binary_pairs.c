#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    int i, length, n;
    int flag = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", string1);
        length = strlen(string1);

            if (string1[i] != string1[length - i - 1])
            {
                flag = 1;
            }
                if (length < 7)
                    printf("Case #3: %s\n", string1);
                else if (flag != 1 && length >= 7)
                    printf("Case #2: %c%d%c\n", string1[0], (length - 2), string1[length - 1]);
                else if (flag == 1)
                    printf("Case #1: Not Palindrome\n");
    
    }
    return 0;
}