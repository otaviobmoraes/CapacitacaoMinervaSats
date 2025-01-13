#include <stdio.h>

void
compararBitABit(unsigned short bit1[8], unsigned short bit2[8]){

    unsigned short indice;

    /*laco para percorrer o array de bits*/

    for (indice = 0; indice < 8; indice++){

        if(bit1[indice] == bit2[indice]){

            /*bits iguais printa 1*/

            printf("%u", 1);

        } else {

            /*bits diferentes printa 0*/

            printf("%u", 0);
        }

    }

}

void
shiftAEsquerda(unsigned short bit1[8]){

    /*definir tipo das variaveis*/

    unsigned short indice;
    unsigned short bitDeslocado[8];

    /*deslocar bits*/

    for (indice = 0; indice < 7; indice++){

        bitDeslocado[indice] = bit1[indice+1];
    }
    
    /*ultimo bit igual a 0*/

    bitDeslocado[7] = 0;
    
    /*printar novo numero binario*/

    for (indice = 0; indice < 8; indice++){

        printf("%u",bitDeslocado[indice]);
    }

}

void
shiftADireita(unsigned short bit1[8]){

    /*definir variaveis*/

    unsigned short indice;
    unsigned short bitDeslocado[8];

    /*deslocar bits a direita*/

    for (indice = 7; indice > 0; indice--){

        bitDeslocado[indice] = bit1[indice - 1];
    }
    
    /*primeiro bit igual a 0*/

    bitDeslocado[0] = 0;

    /*printar novo numero binario*/

    for (indice = 0; indice < 8; indice++){

        printf("%u",bitDeslocado[indice]);
    }
}

void
inveterNumero(unsigned short bit1[8]){

    unsigned short indice;
    
    /*laco para percorrer o array*/

    for(indice = 0; indice < 8; indice++){

        /*utilizando operador ternario para inverter os bits*/

        bit1[indice] = bit1[indice] == 0 ? 1 : 0;
    }
    
    /*printar novo numero binario*/

    for (indice = 0; indice < 8; indice++){

        printf("%u",bit1[indice]);
    }

}

int
main(){

    /*definindo tipo das variaveis e os numeros binarios*/

    unsigned short indice;
    unsigned short bit1[8] = {1,0,1,1,0,0,1,1};
    unsigned short bit2[8] = {1,1,1,0,0,1,0,0};

    /*printar numeeros*/

    printf("Numero 1: ");
    
    for (indice = 0; indice < 8; indice++){

        printf("%u",bit1[indice]);
    
    }

    printf("\nNumero 2: ");

    for (indice = 0; indice < 8; indice++){

        printf("%u",bit2[indice]);
    
    }


    /*chamar funcoes e printar os resultados*/

    printf("\nComparar bit a bit: ");
    compararBitABit(bit1, bit2);
    printf("\nDeslocamento a esquerda: ");
    shiftAEsquerda(bit1);
    printf("\nDeslocamento a direita: ");
    shiftADireita(bit1);

    if (bit1[7] == 1){

        printf("O bit menos signicativo é 1.\nInvertendo todos os bits...\n");
        printf("Numero Invertido: ");
        inveterNumero(bit1);
    } else {

        printf("\nO LSB esta inativo.\n");
    }

    return 0;
}