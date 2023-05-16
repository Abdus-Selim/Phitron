#include<stdio.h>

int main(){
    
    long long int num, sum=0;
    scanf("%lld", &num);

    while(num>0){
        sum = sum+num%10;
        num = num/10;
    }printf("%lld\n",sum);

    return 0;
}

