#include<stdio.h>

int main()
{
    // int n, i, a;
    // float sum=0, average;
    // printf("how many numbers do you want to input?\n");
    // scanf("%d", &n);
    // printf("Now input your numbers\n");
    // for(i = 1; i<=n; i++){
    //     scanf("%d", &a);
    //     sum = sum+a;

    // }
    // average = sum/n;
    // printf("Output : %.2f\n", average);

    // char ch = '*';
    // int n;
    // scanf("%d", &n);

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=i; j++){
    //         printf("%c", ch);
    //     }
    //     printf("\n");
    // }

    int n, rem , flag;
    scanf("%d", &n);
    for(int i = 2; i<n; i++){
        rem=n%i;
        
        if(rem==0){
            flag = 1;
            printf("It's not a prime number");
            break;
        }
    }
    if(flag!=1){
        printf("It's a prime number\n");
    }
    return 0;
}