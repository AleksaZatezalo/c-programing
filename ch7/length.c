/* Determins the length of a message. */

#include <stdio.h>

int main(void){
    int lens = 0;

    printf("Enter a message: ");
    while(getchar() != '\n'){
        lens++;
    }

    printf("Your message is %d chars long\n", lens);
}