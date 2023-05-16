

// int main() {
//     int i = 0;
//     (void) (i++ < 1001 && printf("%d ", i + 1), main());
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i = 0;
//     print_number:
//     if (i <= 1000) {
//         printf("%d ", i);
//         i++;
//         goto print_number;
//     }
//     return 0;
// }

#include <stdio.h>

// void print_number(int i)
// {
//     if (i <= 1000)
//     {
//         printf("%d ", i);
//         if (i % 10 == 0)
//         {
//             printf("\n");
//         }
//         print_number(i + 1);
//     }
// }

int main()
{
    int i, print_number = 0;
    if (i <= 1000)
    {
        printf("%d ", i);
        if (i % 10 == 0)
        {
            printf("\n");
        }
        print_number = (i + 1);
    }

    return 0;
}
