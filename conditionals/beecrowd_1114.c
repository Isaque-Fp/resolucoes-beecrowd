#include <stdio.h>

int main() {
    int senha;

    while (scanf("%d", &senha) == 1) {
        if (senha == 2002) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}