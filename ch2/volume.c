/* Computes the volume of a 12" by 10" by 8" box. */

#include <stdio.h>

int main(void){
    int height, length, width, volume, weight;
    
    height =8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", height, length, weight);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Weight (pounds): %d\n", weight);

    return 0;
}