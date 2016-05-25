#include <stdio.h>

typedef int inteiro;

typedef struct defcli{int a; int b;} CLIENTE;

CLIENTE c1, c2;
CLIENTE c3;

int main(){

	inteiro a;
	a=42;

	printf("A=%d\n",a);

	return 0;
}
