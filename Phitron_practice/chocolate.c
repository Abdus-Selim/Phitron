#include<stdio.h>

int main(){

    int choc, pack, n;
    scanf("%d", &n);

    choc = n;
    pack = n;

    for(int i = 1; i>=4; i++){
        choc = choc + pack/4;
        pack = pack/4+pack%4;
    }
    printf("%d", choc);

    return 0;
}