#include<stdio.h>

int main(){

    int start, end;
    printf("Please enter the first number : ");
    scanf("%d", &start);

    printf("\nPlease enter the 2nd number : ");
    scanf("%d", &end);

    int sum = 0;
    for(int i = start; i<=end; i++){
        sum=sum+i;
    }
    printf("\nHere is the sum of all the nums of your range : %d\n", sum);

    return 0;
}