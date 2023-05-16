#include <stdio.h>
#include <string.h>

int main()
{

    int i, j, k, t_case, num_value, max = 0, position, flag = 0;
    int val[55];
    scanf("%d", &t_case);

    for (i = 0; i < t_case; i++)
    {
        position =0;
        scanf("%d", &num_value);
        for (j = 0; j < num_value; j++)
        {
            scanf("%d", &val[j]);
        }
        for (j = 0; j < num_value; j++)
        {
            for (k = 2; k < val[j]; k++)
            {
                if (val[j] % k != 0)
                {
                    flag = 1;
                    max = val[j];
                    position = j + 1;
                }
            }
        }
        if (flag == 1)
        {
            printf("%d\n", position);
        }
        else printf("-1\n");
    }


return 0;
}