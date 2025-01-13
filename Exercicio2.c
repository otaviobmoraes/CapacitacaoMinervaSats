#include <stdio.h>

#define NUM_LINHAS  5

void
imprimirPiramide(){

    /*obs coloquei cores para parecer uma arvore de natal*/

    /*definir variaveis*/

    unsigned short indice1, indice2;

    for (indice1 = 0; indice1 <= NUM_LINHAS; indice1++){

        for (indice2 = 0; indice2 < indice1; indice2++){

            /*primeiro asterisco amarelo*/

            if (indice1 == 1 && indice2 ==0){    

                printf("\033[33m*\033[0m");

            /*outros asteriscos verdes*/

            } else {

                printf("\033[32m*\033[0m");
            }
        }
        printf("\n");
    }

}

int
main(){

    imprimirPiramide();

    return 0;
}