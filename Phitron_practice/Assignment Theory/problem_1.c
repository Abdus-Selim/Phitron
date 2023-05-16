#include<stdio.h>
int main() { 
    int n1, n2, n3, n4;
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if(n1>n2 && n1>n3 && n1>n4){
        printf("Largest = %d\n", n1);
    } else if(n2>n1 && 2>n3 && 2>n4){
        printf("Largest = %d\n", n2);
    }else if(n3>n1&&n3>n2&&n3>n4){
        printf("Largest = %d\n", n3);
    }else {printf("Largest = %d\n", n4);}

    if(n1<n2&&n1<n3&&n1<n4){
        printf("Smallest = %d\n", n1);
    } else if(n2<n1 && n2<n3 && n2<n4){
        printf("Smallest = %d\n", n2);
    } else if(n3<n1&&n3<n2&&n3<n4){
        printf("Smallest = %d\n", n3);
    } else{printf("Smallest = %d\n", n4);}

  return 0;
}