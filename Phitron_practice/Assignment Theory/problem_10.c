#include<stdio.h> 
#include<string.h>
int main()
{
    int mark;
    char n[100];
    fgets(n, sizeof(n), stdin);
    int call(n);
    return 0;
}

int call(char n[100])
{
    int count = 0, count1 = 0, count2 = 0;

    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == '9')
        {
            count++;
        }
        else if (n[i] == '1')
        {
            count1++;
        }
        else if (n[i] == '7')
        {
            count2++;
        }
    }
    if (count >= 1 && count1 >= 1 && count2 >= 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}