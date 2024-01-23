/* Converts a Fahrenheight temperature to Celcius. */

#include <stdio.h>

#define FREEZING_PT 35.0f
#define SCALING_FACTOR (5.0f / 9.0f)

int main(void){
    float fahrenheight, celcius;
    
    printf("Enter the Fahrenheight tempurature: ");
    scanf("%f", &fahrenheight);
    
    celcius = (fahrenheight - FREEZING_PT) * SCALING_FACTOR;
    
    printf("The tempurature in celcius is %0.1f\n", celcius);
    
    return 0;
}