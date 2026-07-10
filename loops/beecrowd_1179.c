#include <stdio.h>

int main() {
    int par[5], impar[5];
    int posPar = 0, posImpar = 0;
    int numero;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            par[posPar] = numero;
            posPar++;
            if (posPar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                posPar = 0;
            }
        } else {
            impar[posImpar] = numero;
            posImpar++;
            if (posImpar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                posImpar = 0;
            }
        }
    }
    for (int j = 0; j < posImpar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (int j = 0; j < posPar; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}