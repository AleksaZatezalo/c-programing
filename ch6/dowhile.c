/* Do while statement. */

#include <stdio.h>

int main(void){
    int i = 10;

    do 
        printf("T minus %d\n", i--);
    while(i > 0);

    return 0;
}