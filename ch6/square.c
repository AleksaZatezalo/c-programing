/* Prints the number of squares using a while statement. */

#include <stdio.h>

int main(void){
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in the table:");
    scanf("%d", &n);

    i = 1;
    while (i <= n){
        printf("%d\t%d\n", i, i * i);
        i++;
    }

    return 0;
}