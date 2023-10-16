#include <stdio.h>

int main(void){
    // step one..declaring variables
    int radius=3;
    const float PI=3.14;
    float area;
    // step two..compute the result
    area=PI*radius*radius;
    // display result
    printf("%f",area);
}