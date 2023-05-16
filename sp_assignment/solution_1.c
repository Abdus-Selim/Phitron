#include<stdio.h>

int main(){

    int birth_year;
    printf("Please enter your birth year : ");
    scanf("%d", &birth_year);

    int age;
    age = (2022 - birth_year);
    printf("Hey, you are %d years old.\n", age);
    return 0;
}