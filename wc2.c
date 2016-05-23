#include <stdio.h>

int main(int argc, char* argv[]) {

    FILE *arquivo;
    int c;

    int cl = 0;
    int cb = 0;
    int cp = 0;
    int flag = 1;

    arquivo = fopen(argv[1], "r");/*abrir arquivo digitado por linha de comando*/

    c = getc(arquivo);/*pega o primeiro byte*/
    while( c != -1 )
    {
        cb++;/*conta o numero de bytes*/
        if (c == '\n')/*conta as linhas*/
            cl = cl + 1;
        if ((c == ' ')||(c == '\n')||(c == '\t')){/*checa se está entre palavras*/
			if (flag == 0){/*checa se já não estave entre palavras*/
				cp = cp + 1;/*conta as palavras*/
				flag = 1;/*indica que já esta entre palavras*/
			}
	}else{
		flag = 0;	/*indica que não está mais entre palavras*/	
	}

        /*printf("%i %c %x\n", c, c, c);*/
        c = getc(arquivo);/*pega o próximo byte*/
    }

    printf("L=%3i P=%3i B=%3i\n", cl, cp, cb);/*escreve na tela o numero de linha, palavras e bytes*/


    fclose(arquivo);/*fecha o arquivo*/


    return 0;
}

/*||(c ==';')||(c =='\"')||(c =='.')||(c ==',')||(c =='(')||(c ==')')*/
