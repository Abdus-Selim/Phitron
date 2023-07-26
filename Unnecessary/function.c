/*Creating Functions and using it for the very first time in my life. 
Lets see!*/

#include <stdio.h>

void salam();
void bonjour();

int main(){

    printf("Please enter M for Muslim or F for French \n");

    char ch;
    scanf("%c", &ch);
    

    if(ch == 'm'){
        salam();
    } else if (ch == 'f'){
        bonjour();
    } else{printf("Oops! Sorry.\n");}

    return 0;
}


void salam(){
    printf("Assalamualaikum there, how are you?\n");
}

void bonjour(){
    printf("Bonjour, how are doing?\n");
}