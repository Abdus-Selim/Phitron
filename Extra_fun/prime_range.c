#include<stdio.h>

// Prime number check in certain range.

int main(){

    int start, end, flag, i, j;
    printf("Please enter your range : ");
    scanf("%d", &start);

    for(i = start; i<=end; i++){
        for(j = 2; j<=i; j++){
            if(i%j==0){
            flag = 1;
            printf("It's not a prime number");
            break;
        }
    }
    if(flag!=1){
        printf("It's a prime number\n");
    }
        }
    

    return 0;
}