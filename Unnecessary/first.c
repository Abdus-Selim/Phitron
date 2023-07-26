#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentRank;
    double studentFeeTotal;
    char studentGradeLetter;

    studentRank = 4;
    studentFeeTotal = 600.66;
    studentGradeLetter = 'A';

    printf("Student's Rank in class : %d\n", studentRank);
    printf("Total Fee for any student is %f\n", studentFeeTotal);
    printf("He got %c\n", studentGradeLetter);
    return 0;
}