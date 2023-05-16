#include <stdio.h>

int main()
{

    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int i, GCD, LCM;

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }
    LCM = (num1 * num2) / GCD;
    printf("The LCM of %d and %d is %d.\n", num1, num2, LCM);

    return 0;
}