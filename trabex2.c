#include <stdio.h>

float converterTemperatura (float)
float converterTemperatura (float f){
    float c;
    c= (5,0f/9,0f)*(f-32);
    if(c<=-268){
        printf("zero absoluto! -273�c");
    }
        if(c<=5 && c>=-5){
        printf("congelamento da �gua! 0�c");
    }
        if(c<=95 && c>=105){
        printf("ebuli��o da �gua! 100�c");
    }
    return c;
}
int main() {
    return 0;
}
