#include <stdio.h>


float
calcularMedia(float nota1, float nota2){
    
    float media;

    /*calculo de media*/

    media = (nota1 + nota2)/2;

    /*printar a media*/

    printf("A media foi: %.2f\n",media);


    return media;
}

void
situacaoAprovacao(float media, float mediaAprovacao){

    printf("Situacao: ");

    /*aluno com media menor que mediaAprovacao reprovado*/

    if (media < mediaAprovacao) {

        printf("Aluno Reprovado.");

    /*aluno com media maior que mediaAprovacao aprovado*/

    } else {
 
        printf("Aluno Aprovado.");
    }
}

int
main(){
    
    unsigned short media;

    /*chamada das funcoes*/

    media = calcularMedia(4,6);

    situacaoAprovacao(media, 5);

    return 0;
}