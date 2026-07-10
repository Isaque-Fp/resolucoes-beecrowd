#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        long long m[15][15];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                long long valor = 1;
                for (int k = 0; k < i + j; k++) {
                    valor = valor * 2;
                }
                m[i][j] = valor;
            }
        }
        long long maior = m[n - 1][n - 1];
        int larg = 1;
        long long temp = maior;
        while (temp >= 10) {
            temp = temp / 10;
            larg++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%*lld", larg, m[i][j]);
                if (j < n - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}