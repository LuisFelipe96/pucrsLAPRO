#include <stdio.h>

unsigned long fatorial(unsigned long);

unsigned long fatorial(unsigned long n){
	unsigned long f=1L;
	unsigned long c;
	for (c=1L;c<=n;c++){
		f=f*c;	
	}	
	return f;
}

int main(){
	unsigned long n;
	unsigned long f;
	printf("digiteum numero:");
	scanf("%li",&n);
	f= fatorial(n);
	printf("N=%li, F=%li\n",n,f);
	return 0;
}
