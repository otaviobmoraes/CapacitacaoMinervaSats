#include <stdio.h>
#include <stdint.h>

#define ENDERECO_SENSOR_1        0x19
#define ENDERECO_SENSOR_2        0x76


typedef struct {

    uint32_t endereco;
    double temperaturas[5];

} SENSOR;

/*funcao para calcular media*/

double calcularMedia(double temperaturas[], unsigned short tamanho){

    unsigned short indice;

    double soma = 0;

    for (indice = 0; indice < tamanho; indice++){

        soma += temperaturas[indice];
    }
    
    return soma / tamanho;
}

/*funcao para exibir dados*/

void
exibirDados(SENSOR sensor, const char* nomeSensor){

    unsigned short indice;

    printf("Dados do %s:\n",nomeSensor);
    printf("Endereco: 0x%X\n", sensor.endereco);
    printf("Temperaturas: ");

    /*laco para percorrer o array*/

    for (indice = 0; indice < 5; indice++) {
        printf("%.2f ", sensor.temperaturas[indice]);
    }
    printf("\n");

}

int main() {
    
    /*definir tipo das variaveis e valores das leituras*/
    
    double leiturasSensor1[5] = {28.5, 30.2, 29.8, 31.0, 27.5};
    double leiturasSensor2[5] = {25.3, 26.7, 24.8, 23.5, 26.0};

    
    SENSOR sensor1 = {ENDERECO_SENSOR_1, {0}};
    SENSOR sensor2 = {ENDERECO_SENSOR_2, {0}};

    unsigned short indice;

    /*laco para percorrer o array*/

    for (indice = 0; indice < 5; indice++) {
        sensor1.temperaturas[indice] = leiturasSensor1[indice];
        sensor2.temperaturas[indice] = leiturasSensor2[indice];
    }

    /*chamada das funcoes para calcular media*/

    double mediaSensor1 = calcularMedia(sensor1.temperaturas, 5);
    double mediaSensor2 = calcularMedia(sensor2.temperaturas, 5);

    /*exibir dados dos sensores*/

    exibirDados(sensor1, "Sensor 1");
    printf("Media: %.2f C - ", mediaSensor1);
    printf(mediaSensor1 >= 30.0 ? "Calor\n" : "Temperatura normal\n");

    exibirDados(sensor2, "Sensor 2");
    printf("Media: %.2f C - ", mediaSensor2);
    printf(mediaSensor2 >= 30.0 ? "Calor\n" : "Temperatura normal\n");

    
    printf("\nEnderecos de memoria:\n");
    printf("Sensor 1: %p\n", (void*)&sensor1);
    printf("Sensor 2: %p\n", (void*)&sensor2);

    return 0;
}