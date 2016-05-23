#include <stdio.h>

int main(int argc, char* argv[]) {

    FILE *arquivo;
    int c;

    int cl = 0;
    int cb = 0;
    int cp = 0;
    int flag = 1;

    arquivo = fopen(argv[1], "r");

    c = getc(arquivo);
    while( c != -1 )
    {
        cb++;
        if (c == '\n')
            cl = cl + 1;
        if ((c == ' ')||(c == '\n')||(c == '\t')){
		if (flag == 0){
			cp = cp + 1;
			flag = 1;
		}
	}else{
		flag = 0;		
	}

        /*printf("%i %c %x\n", c, c, c);*/
        c = getc(arquivo);
    }

    printf("L=%3i P=%3i B=%3i\n", cl, cp, cb);


    fclose(arquivo);


    return 0;
}

/*||(c ==';')||(c =='\"')||(c =='.')||(c ==',')||(c =='(')||(c ==')')*/
