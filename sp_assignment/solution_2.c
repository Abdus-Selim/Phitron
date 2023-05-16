#include<stdio.h>

int main(){

    int id;
    printf("Please enter your IDs last three digits : ");
    scanf("%d", &id);

    if(id%2 == 0){
        printf("Your ID number is even.\n");
    } else{printf("Your ID number is odd.\n");}

    return 0;
}