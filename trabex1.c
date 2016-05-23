#include <stdio.h>

void troca(float *, float *);
void troca (float *a,float *b){
    float aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
int main() {
	float a;
	float b;
	printf("digite dois numeros: ");
	scanf("%f %f",&a,&b);
	troca(&a,&b);
	printf("%0.2f e %0.2f",a,b);
    return 0;
}
