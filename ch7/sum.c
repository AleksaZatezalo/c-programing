/* Sums a serise of numbers (using long variables).*/

#include <stdio.h>

int main(void){
    long n, sum = 0;

    printf("This program sums a serise of integers.\n");
    
    printf("Enter an integer (0 to terminate): ");
    scanf("%ld", &n);
    while (n != 0){
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum is %ld\n", sum);
    return 0;
}