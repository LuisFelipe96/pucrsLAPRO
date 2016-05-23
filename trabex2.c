#include <stdio.h>

float converterTemperatura (float);
float converterTemperatura (float f){
    float c;
    c = ((5.0f/9.0f)*(f-32));
    if(c<=-268){
        printf("zero absoluto! -273°c\n");
    }
        if(c<=5 && c>=-5){
        printf("congelamento da água! 0°c\n");
    }
        if(c<=95 && c>=105){
        printf("ebulição da água! 100°c\n");
    }
    return c;
}
int main() {
	float f;
	printf("digite uma temperatura: ");
	scanf("%f",&f);
	printf("%.2f°C\n",converterTemperatura(f));
    return 0;
}
