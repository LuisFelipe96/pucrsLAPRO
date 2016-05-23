#include <stdio.h>

int main() {

    FILE *arquivo;
    char nome[50];
    int menor = 0;
    int n1;
    int n2;
	int aux;
    printf("digite o nome do arquivo: ");
    scanf("%s",nome);
    arquivo = fopen(nome, "r");
    while(!feof(arquivo))
    {
		aux=fscanf(arquivo,"%d %d",&n1,&n2);
        if (aux>0){
            if (n1>n2){
                printf("%d\n",n1);
                menor=n2+menor;
            }else{
				printf("%d\n",n2);				
                menor=n1+menor;
            }
        }
	}

    printf("soma dos menores valores: %d\n", menor);
    fclose(arquivo);
    return 0;
}
