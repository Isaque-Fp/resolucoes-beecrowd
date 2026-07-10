#include <stdio.h>

int main() {
    char o;
    float m[12][12];

    scanf(" %c", &o);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &m[i][j]);
        }
    }

    float soma = 0;
    int quantidade = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (j > i) {
                soma += m[i][j];
                quantidade++;
            }
        }
    }

    if (o == 'S') {
        printf("%.1f\n", soma);
    } else {
        printf("%.1f\n", soma / quantidade);
    }

    return 0;
}