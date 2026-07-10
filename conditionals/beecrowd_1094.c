#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int quantidade;
    char tipo;
    int totalCoelho = 0, totalRato = 0, totalSapo = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &quantidade, &tipo);
        if (tipo == 'C') {
            totalCoelho += quantidade;
        } else if (tipo == 'R') {
            totalRato += quantidade;
        } else {
            totalSapo += quantidade;
        }
    }

    int total = totalCoelho + totalRato + totalSapo;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalCoelho);
    printf("Total de ratos: %d\n", totalRato);
    printf("Total de sapos: %d\n", totalSapo);
    printf("Percentual de coelhos: %.2f %%\n", (totalCoelho * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (totalRato * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (totalSapo * 100.0) / total);

    return 0;
}