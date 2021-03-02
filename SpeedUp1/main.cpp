#include "TestaPrimo.c"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <ctime>

int main(void) {
    int numeros[8] = {7, 37, 8431, 13033, 524287, 664283, 3531271, 2147483647};

    clock_t t;

	std::cout<<"Algoritmo 1:\n";
    for (int i = 0; i < 8; i++) {

        t = clock();

        if (TestaPrimo1(numeros[i])) {
            printf("O numero %d %s", numeros[i], "eh primo.");
        }
        else {
            printf("O numero %d %s", numeros[i], "nao eh primo.");
        }

        printf(" Tempo de exec: %lu ciclos.\n", ((clock() - t)));

    double tempoCalculoMS1 = ((clock() - t) * 1000.0 / CLOCKS_PER_SEC)*0.001;
    
    printf("Tempo gasto no calculo do algoritmo: %f segundos\n", tempoCalculoMS1);


    }
    
    std::cout<<"Algoritmo 2:\n";
    for (int i = 0; i < 8; i++) {

        t = clock();

        if (TestaPrimo2(numeros[i])) {
            printf("O numero %d %s", numeros[i], "eh primo.");
        }
        else {
            printf("O numero %d %s", numeros[i], "nao eh primo.");
        }
        printf(" Tempo de exec: %lu ciclos.\n", ((clock() - t)));

				double tempoCalculoMS2 = ((clock() - t) * 1000.0 / CLOCKS_PER_SEC)*0.001;
    
    printf("Tempo gasto no calculo  do algoritmo %f segundos\n", tempoCalculoMS2);

    }
    
    std::cout<<"Algoritmo 3:\n";
    for (int i = 0; i < 8; i++) {

        t = clock();

        if (TestaPrimo3(numeros[i])) {
            printf("O numero %d %s", numeros[i], "eh primo.");
        }
        else {
            printf("O numero %d %s", numeros[i], "nao eh primo.");
        }
        printf(" Tempo de exec: %lu ciclos.\n", ((clock() - t)));

				double tempoCalculoMS3 = ((clock() - t) * 1000.0 / CLOCKS_PER_SEC)*0.001;
    
    printf("Tempo gasto no calculo do algoritmo: %f segundos\n", tempoCalculoMS3);

    }
    

    return 0;
}
