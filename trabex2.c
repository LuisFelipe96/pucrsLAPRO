#include <stdio.h>

float converterTemperatura (float)
float converterTemperatura (float f){
    float c;
    c= (5,0f/9,0f)*(f-32);
    if(c<=-268){
        printf("zero absoluto! -273ºc");
    }
        if(c<=5 && c>=-5){
        printf("congelamento da água! 0ºc");
    }
        if(c<=95 && c>=105){
        printf("ebulição da água! 100ºc");
    }
    return c;
}
int main() {
    return 0;
}
