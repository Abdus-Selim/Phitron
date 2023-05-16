#include <stdio.h>

int main()
{
    int num, i, flag;
    scanf("%d", &num);

      for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Composite\n");
    }
    else
    {
        printf("Prime\n");
    }

    return 0;
}