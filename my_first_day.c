#include<stdio.h>
int main()
{
    int a,b;
    a = 4;
    b = 6;
    
    scanf ("%d %d", &a, &b);
    if(a>b)
    {
        printf("%d is bigger than %d", a,b);}
        else if(b>a)
        {
            printf ("%d is bigger than %d", b,a);
        } 
        else {printf("%d and %d are equal", a,b);}
    
    return 0;
}

