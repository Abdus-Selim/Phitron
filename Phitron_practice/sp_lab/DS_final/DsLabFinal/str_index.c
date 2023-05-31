#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Index(char str1[], char str2[])
{
    int s1_length = strlen(str1);
    int s2_length = strlen(str2);
    int i = 0, j = 0, start = -1;
    for (i = 0; i < s1_length; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
            if (start == -1)
                start = i;
        }
        else
        {
            j = 0;
            start = -1;
        }
        if (j == s2_length)
            return start;
    }
    return -1;
}

int main()
{
    int index = Index("Difficult", "cult");
    printf("The index is %d\n", index);

    return 0;
}