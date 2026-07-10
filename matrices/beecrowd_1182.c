#include <stdio.h>

int main() {
    int c;
    char t;
    float m[12][12];

    scanf("%d", &c);
    scanf(" %c", &t);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &m[i][j]);
        }
    }

    float soma = 0;
    for (int i = 0; i < 12; i++) {
        soma += m[i][c];
    }

    if (t == 'S') {
        printf("%.1f\n", soma);
    } else {
        printf("%.1f\n", soma / 12);
    }

    return 0;
}
