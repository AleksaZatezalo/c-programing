/* Adds to fractions */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_dom;

    printf("Enter the first fraction:");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter the second fraction:");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_dom =denom1 * denom2;
    printf("The result is %d/%d", result_num, result_dom);
    return 0;
}