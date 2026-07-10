#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra1[100], palavra2[100], palavra3[100];

    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);

    if (strcmp(palavra1, "vertebrado") == 0) {
        if (strcmp(palavra2, "ave") == 0) {
            if (strcmp(palavra3, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (strcmp(palavra3, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (strcmp(palavra2, "inseto") == 0) {
            if (strcmp(palavra3, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (strcmp(palavra3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}