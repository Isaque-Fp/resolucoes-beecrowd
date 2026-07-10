#include <stdio.h>

int main() {
    int total_inicio, total_final, diferenca;
    int resto, dia_i, hora_i, min_i, seg_i;
    int dia_f, hora_f, min_f, seg_f;

    scanf("Dia %d", &dia_i);
    scanf(" %d : %d : %d", &hora_i, &min_i, &seg_i);
    scanf(" Dia %d", &dia_f);
    scanf(" %d : %d : %d", &hora_f, &min_f, &seg_f);

    total_inicio = (dia_i * 86400) + (hora_i * 3600) + (min_i * 60) + seg_i;
    total_final  = (dia_f * 86400) + (hora_f * 3600) + (min_f * 60) + seg_f;
    diferenca = total_final - total_inicio;

    dia_f = diferenca / 86400;
    resto = diferenca % 86400;
    hora_f = resto / 3600;
    resto = resto % 3600;
    min_f = resto / 60;
    resto = resto % 60;
    seg_f = resto;

    printf("%d dia(s)\n", dia_f);
    printf("%d hora(s)\n", hora_f);
    printf("%d minuto(s)\n", min_f);
    printf("%d segundo(s)\n", seg_f);
    return 0;
}