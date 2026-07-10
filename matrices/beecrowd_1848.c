#include <stdio.h>
#include <string.h>

int main() {
    char palavra[10];
    int soma = 0;

    while (scanf("%s", palavra) == 1) {
        if (strcmp(palavra, "caw") == 0) {
            scanf("%s", palavra); 
            printf("%d\n", soma);
            soma = 0;
        } else {
            int numero = 0;
            for (int i = 0; i < 3; i++) {
                numero = numero * 2;
                if (palavra[i] == '*') {
                    numero = numero + 1;
                }
            }
            soma += numero;
        }
    }

    return 0;
}