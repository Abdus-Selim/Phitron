#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "PAPA";
    char str2[100];

    // Copy str1 to str2 in reverse order
    int length = strlen(str1);
    for (int i = 0; i < length; i++) {
        str2[i] = str1[length - i - 1];
    }
    str2[length] = '\0';

    if (strcmp(str1, str2) == 0)
        printf("Palindrome.\n");
    else 
        printf("Not a palindrome.\n");

    return 0;
}