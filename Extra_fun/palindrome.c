#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100] = "rotator";
    char str2[100];

    strcpy(str2, str1);
    strrev(str1);

    if(strcmp(str1, str2) == 0)
        printf("Palindrome.\n");
    else 
        printf("Not a palindrome.\n");

    return 0;
}