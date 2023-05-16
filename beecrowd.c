#include <stdio.h>
 
int main() {

    int n, rem;
    char ch = '%';
    // scanf("%d", &n);

    for(int i = 1; i<=3; i++){
        scanf("%d", &n);

        // rem = n%2;
        // printf("%d%c2 = %d\n", n, ch, rem);
    }
    rem = n%2;
    printf("%d%c2 = %d", n, ch, rem);
    
    
    return 0;
}