#include <stdio.h>

int main() {
    int codigo;
    int alcool = 0, gasolina = 0, diesel = 0;

    while (scanf("%d", &codigo) == 1) {
        if (codigo == 4) {
            break;
        } else if (codigo == 1) {
            alcool++;
        } else if (codigo == 2) {
            gasolina++;
        } else if (codigo == 3) {
            diesel++;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}